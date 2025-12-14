#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 99308924771882671ULL;
unsigned short var_12 = (unsigned short)9111;
unsigned char var_14 = (unsigned char)117;
unsigned char var_16 = (unsigned char)255;
int zero = 0;
short var_18 = (short)19723;
unsigned char var_19 = (unsigned char)109;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

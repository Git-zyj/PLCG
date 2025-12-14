#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)121;
unsigned char var_8 = (unsigned char)154;
short var_9 = (short)6759;
int zero = 0;
unsigned long long int var_17 = 11291764220941131140ULL;
short var_18 = (short)6503;
unsigned long long int var_19 = 13997244135298933573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

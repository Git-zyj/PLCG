#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13318;
unsigned long long int var_7 = 2249837465562949387ULL;
unsigned short var_10 = (unsigned short)15190;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)32;
unsigned long long int var_18 = 14177126925616816288ULL;
unsigned short var_19 = (unsigned short)41256;
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

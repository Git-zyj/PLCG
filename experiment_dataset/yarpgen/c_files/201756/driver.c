#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned char var_4 = (unsigned char)63;
long long int var_8 = 2050672542716194121LL;
unsigned short var_9 = (unsigned short)36102;
int zero = 0;
unsigned int var_10 = 156779081U;
unsigned long long int var_11 = 3061619090215667411ULL;
unsigned short var_12 = (unsigned short)3168;
unsigned char var_13 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18019239060141892628ULL;
unsigned char var_2 = (unsigned char)109;
unsigned char var_3 = (unsigned char)254;
signed char var_4 = (signed char)64;
short var_6 = (short)3286;
unsigned long long int var_7 = 13061823352979317941ULL;
unsigned char var_9 = (unsigned char)97;
unsigned char var_13 = (unsigned char)82;
int zero = 0;
short var_14 = (short)17387;
unsigned char var_15 = (unsigned char)17;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

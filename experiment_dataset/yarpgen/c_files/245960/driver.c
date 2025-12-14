#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10381766764955576139ULL;
unsigned int var_2 = 41726400U;
unsigned char var_7 = (unsigned char)171;
short var_8 = (short)-21985;
unsigned short var_9 = (unsigned short)15046;
unsigned long long int var_12 = 5031176434675912154ULL;
signed char var_13 = (signed char)-11;
long long int var_15 = -4762862470742813044LL;
int zero = 0;
unsigned long long int var_18 = 12324216023841477333ULL;
unsigned char var_19 = (unsigned char)199;
int var_20 = 152364482;
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

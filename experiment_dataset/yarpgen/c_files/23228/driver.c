#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14038123535353150912ULL;
signed char var_2 = (signed char)0;
unsigned int var_5 = 640980873U;
int var_6 = -308928003;
unsigned long long int var_11 = 5016036996440691354ULL;
unsigned int var_12 = 1674416224U;
int zero = 0;
unsigned char var_13 = (unsigned char)94;
long long int var_14 = -4444477112202229820LL;
long long int var_15 = 9059172012264511731LL;
unsigned char var_16 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

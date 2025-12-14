#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
int var_6 = 1350235179;
signed char var_8 = (signed char)38;
unsigned long long int var_9 = 10003527665167993502ULL;
unsigned int var_11 = 4194159600U;
unsigned char var_12 = (unsigned char)244;
unsigned short var_13 = (unsigned short)7401;
unsigned long long int var_15 = 4416466759663045210ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
short var_19 = (short)-16179;
unsigned long long int var_20 = 8708703977475462211ULL;
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

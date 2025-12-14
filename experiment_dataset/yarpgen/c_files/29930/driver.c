#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
unsigned int var_3 = 566368820U;
unsigned char var_4 = (unsigned char)64;
unsigned long long int var_6 = 17146106170707546154ULL;
unsigned char var_7 = (unsigned char)223;
unsigned char var_9 = (unsigned char)119;
unsigned char var_13 = (unsigned char)116;
unsigned int var_17 = 2393643600U;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned long long int var_19 = 5741789865749774838ULL;
void init() {
}

void checksum() {
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

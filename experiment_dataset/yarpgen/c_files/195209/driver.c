#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2705244822U;
unsigned long long int var_1 = 17407974905305762559ULL;
long long int var_2 = 3366911865427589000LL;
unsigned int var_3 = 515088945U;
unsigned char var_4 = (unsigned char)35;
long long int var_5 = -8827270106404625797LL;
short var_10 = (short)-22349;
long long int var_11 = -1757037309822386274LL;
unsigned char var_12 = (unsigned char)202;
unsigned long long int var_16 = 8083518710050775247ULL;
int zero = 0;
int var_17 = -694333927;
unsigned int var_18 = 1016157977U;
int var_19 = 2075591685;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4190588241U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

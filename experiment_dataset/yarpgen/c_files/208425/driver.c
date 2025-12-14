#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1043659949;
int var_3 = 587328148;
short var_4 = (short)22648;
int var_12 = 961794760;
int var_14 = -722747846;
int var_17 = -468527350;
unsigned int var_18 = 1525462993U;
int zero = 0;
long long int var_20 = -7706952127972718743LL;
int var_21 = 609281674;
unsigned int var_22 = 224007540U;
int var_23 = 1125681721;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

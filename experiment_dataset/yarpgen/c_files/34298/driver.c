#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2813897515U;
long long int var_5 = -9102109665355821439LL;
unsigned short var_8 = (unsigned short)50191;
long long int var_9 = -9160787737414042705LL;
unsigned int var_13 = 4034402028U;
unsigned char var_14 = (unsigned char)99;
unsigned short var_18 = (unsigned short)44485;
unsigned int var_19 = 3892466653U;
int zero = 0;
long long int var_20 = 3641289163480693625LL;
long long int var_21 = -4349510934939340127LL;
signed char var_22 = (signed char)-127;
unsigned int var_23 = 3683419411U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10751116817050028393ULL;
unsigned char var_2 = (unsigned char)207;
signed char var_3 = (signed char)-46;
unsigned short var_5 = (unsigned short)31310;
unsigned int var_10 = 516857232U;
unsigned int var_11 = 4069206189U;
unsigned short var_12 = (unsigned short)34998;
unsigned short var_13 = (unsigned short)31964;
int zero = 0;
unsigned char var_16 = (unsigned char)101;
unsigned long long int var_17 = 760492601330120378ULL;
unsigned char var_18 = (unsigned char)202;
unsigned short var_19 = (unsigned short)60990;
int var_20 = -499981040;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

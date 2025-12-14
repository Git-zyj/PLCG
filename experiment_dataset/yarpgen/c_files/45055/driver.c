#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_1 = (short)11785;
unsigned long long int var_2 = 13250470733517267505ULL;
unsigned short var_3 = (unsigned short)16572;
unsigned char var_5 = (unsigned char)133;
long long int var_6 = 5390189410995486797LL;
short var_7 = (short)-23835;
unsigned int var_8 = 1932337176U;
signed char var_9 = (signed char)-122;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-64;
signed char var_16 = (signed char)-122;
signed char var_17 = (signed char)-127;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

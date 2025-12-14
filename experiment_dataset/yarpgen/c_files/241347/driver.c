#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33261;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)5594;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 42477366U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-85;
unsigned char var_12 = (unsigned char)154;
unsigned long long int var_13 = 7980743534707971249ULL;
unsigned long long int var_14 = 11232795180366939066ULL;
short var_16 = (short)-24616;
signed char var_17 = (signed char)69;
int zero = 0;
signed char var_18 = (signed char)-92;
unsigned short var_19 = (unsigned short)33590;
int var_20 = 89725241;
unsigned char var_21 = (unsigned char)117;
void init() {
}

void checksum() {
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

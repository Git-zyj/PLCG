#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18732;
unsigned int var_3 = 2700239835U;
int var_4 = -1862335357;
unsigned int var_6 = 1920848018U;
signed char var_7 = (signed char)-44;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)30;
int zero = 0;
unsigned char var_16 = (unsigned char)206;
unsigned long long int var_17 = 3729234008970020562ULL;
unsigned char var_18 = (unsigned char)28;
int var_19 = 651873155;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

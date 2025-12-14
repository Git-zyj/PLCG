#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24370;
unsigned long long int var_2 = 4483301669889615711ULL;
unsigned char var_4 = (unsigned char)212;
unsigned short var_5 = (unsigned short)54957;
long long int var_8 = -4747336018789936584LL;
signed char var_14 = (signed char)-92;
unsigned long long int var_15 = 355141207056657387ULL;
unsigned int var_16 = 108003332U;
int var_17 = 25697689;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2471243148U;
void init() {
}

void checksum() {
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

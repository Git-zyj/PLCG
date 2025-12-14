#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13811;
unsigned char var_1 = (unsigned char)155;
unsigned short var_2 = (unsigned short)51422;
short var_3 = (short)-8397;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1146908394390629559ULL;
unsigned char var_6 = (unsigned char)109;
signed char var_7 = (signed char)-99;
unsigned int var_8 = 3645499709U;
long long int var_9 = 6596259635247615787LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)164;
int zero = 0;
unsigned short var_12 = (unsigned short)47623;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17709188055635046712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

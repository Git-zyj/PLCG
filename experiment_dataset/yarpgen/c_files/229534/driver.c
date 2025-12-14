#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44055;
unsigned int var_2 = 1328238307U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3688730992U;
unsigned short var_5 = (unsigned short)30645;
unsigned short var_6 = (unsigned short)44344;
unsigned short var_7 = (unsigned short)50504;
unsigned int var_8 = 1582131344U;
unsigned long long int var_9 = 6549379427602226744ULL;
unsigned short var_10 = (unsigned short)9112;
unsigned short var_11 = (unsigned short)15618;
int zero = 0;
unsigned int var_12 = 891597078U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)62530;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

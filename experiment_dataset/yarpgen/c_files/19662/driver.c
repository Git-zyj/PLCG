#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8375;
int var_2 = 1858980050;
unsigned int var_3 = 1739512105U;
unsigned short var_4 = (unsigned short)56138;
short var_6 = (short)20489;
unsigned short var_9 = (unsigned short)3106;
int var_10 = -657497624;
unsigned char var_11 = (unsigned char)251;
long long int var_12 = 3727566226295131379LL;
unsigned short var_14 = (unsigned short)44825;
int zero = 0;
int var_15 = -1666204706;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3985322908689907853ULL;
unsigned int var_18 = 277256880U;
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

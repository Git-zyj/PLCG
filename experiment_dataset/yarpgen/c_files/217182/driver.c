#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
signed char var_1 = (signed char)73;
short var_2 = (short)2407;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 12524705596924602185ULL;
int var_5 = -1766447697;
short var_6 = (short)9557;
unsigned int var_7 = 3363644182U;
int var_8 = -797361561;
int var_10 = 990980841;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)64834;
long long int var_14 = 7508280570034625795LL;
unsigned char var_15 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

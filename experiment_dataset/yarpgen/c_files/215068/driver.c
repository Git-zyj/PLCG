#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25277;
unsigned long long int var_2 = 12564018406865619036ULL;
short var_3 = (short)28200;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)18391;
unsigned short var_12 = (unsigned short)40970;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3155971362U;
signed char var_18 = (signed char)-62;
int zero = 0;
unsigned short var_19 = (unsigned short)60623;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8845448850870902841LL;
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

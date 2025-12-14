#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26390;
short var_6 = (short)-17843;
unsigned long long int var_8 = 2155579362901016858ULL;
unsigned int var_10 = 3617422489U;
signed char var_12 = (signed char)-13;
_Bool var_14 = (_Bool)0;
unsigned long long int var_19 = 14976739467168633831ULL;
int zero = 0;
short var_20 = (short)22338;
unsigned long long int var_21 = 13531609124714053985ULL;
int var_22 = -1897367964;
unsigned long long int var_23 = 15866083934591854768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

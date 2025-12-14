#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
signed char var_1 = (signed char)-97;
_Bool var_2 = (_Bool)1;
int var_4 = -194311163;
unsigned int var_6 = 1849005291U;
unsigned int var_8 = 3634071191U;
unsigned short var_9 = (unsigned short)33858;
int zero = 0;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)6302;
int var_12 = -1074258946;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

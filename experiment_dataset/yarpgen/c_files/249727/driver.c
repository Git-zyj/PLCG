#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -985785275;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)51928;
unsigned int var_8 = 3409220699U;
unsigned char var_9 = (unsigned char)209;
signed char var_18 = (signed char)-63;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = 901708962;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

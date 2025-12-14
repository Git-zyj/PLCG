#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4052563303U;
long long int var_4 = 1374611015395715195LL;
_Bool var_6 = (_Bool)1;
unsigned int var_16 = 3648796956U;
int zero = 0;
unsigned char var_18 = (unsigned char)255;
unsigned short var_19 = (unsigned short)37941;
signed char var_20 = (signed char)-110;
unsigned int var_21 = 2906804741U;
long long int var_22 = 1831137097273278594LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

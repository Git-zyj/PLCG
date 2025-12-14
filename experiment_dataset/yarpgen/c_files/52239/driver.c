#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30570;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2688246670U;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)51;
int zero = 0;
unsigned short var_20 = (unsigned short)56964;
unsigned char var_21 = (unsigned char)22;
_Bool var_22 = (_Bool)0;
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

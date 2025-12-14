#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 440547509U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)94;
int zero = 0;
unsigned int var_16 = 311745407U;
unsigned short var_17 = (unsigned short)54205;
int var_18 = 2005513947;
void init() {
}

void checksum() {
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

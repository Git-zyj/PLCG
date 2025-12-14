#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-113;
unsigned short var_8 = (unsigned short)33670;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)44;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -1331680031993659032LL;
unsigned int var_19 = 545954379U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

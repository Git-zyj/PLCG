#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 733694071;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)51828;
long long int var_12 = -700250689533763223LL;
int var_19 = -367165820;
int zero = 0;
long long int var_20 = 8458793922412146856LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)31092;
unsigned short var_23 = (unsigned short)49857;
signed char var_24 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

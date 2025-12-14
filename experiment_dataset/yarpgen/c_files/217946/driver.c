#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7704;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7732956854265628168LL;
long long int var_15 = -1425203416423859469LL;
short var_16 = (short)9250;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16752;
unsigned int var_11 = 3106920739U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 11821909416233475857ULL;
int zero = 0;
long long int var_17 = -6855974819675838353LL;
int var_18 = -579552397;
int var_19 = 1521745071;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

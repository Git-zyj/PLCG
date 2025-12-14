#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-31447;
unsigned long long int var_5 = 14264772917495146445ULL;
long long int var_6 = -7645131569827125844LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)75;
short var_12 = (short)31175;
int zero = 0;
long long int var_16 = 1564041658149832196LL;
_Bool var_17 = (_Bool)0;
int var_18 = 634776812;
unsigned char var_19 = (unsigned char)109;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

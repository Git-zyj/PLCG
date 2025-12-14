#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2750648457809798953LL;
unsigned short var_3 = (unsigned short)7638;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 3445516788U;
short var_10 = (short)-12628;
short var_11 = (short)-4661;
int zero = 0;
int var_13 = -1012382263;
long long int var_14 = -3200187150415659347LL;
long long int var_15 = -7800472056643817599LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

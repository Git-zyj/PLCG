#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)16670;
unsigned char var_6 = (unsigned char)151;
unsigned int var_7 = 1455945464U;
unsigned int var_9 = 2796223599U;
int zero = 0;
unsigned int var_13 = 3544455085U;
long long int var_14 = 2968219502040338806LL;
_Bool var_15 = (_Bool)1;
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

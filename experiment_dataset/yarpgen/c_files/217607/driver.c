#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 440059036;
unsigned short var_8 = (unsigned short)62203;
short var_10 = (short)21271;
unsigned int var_11 = 805159643U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2751306266432878580LL;
void init() {
}

void checksum() {
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

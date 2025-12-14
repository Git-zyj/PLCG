#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8153703456708391454LL;
_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_15 = (short)27915;
unsigned short var_16 = (unsigned short)50177;
long long int var_17 = 6653916370875176686LL;
unsigned long long int var_18 = 2996837280580447634ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

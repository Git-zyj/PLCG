#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2287011897279939420ULL;
unsigned short var_7 = (unsigned short)4690;
int var_10 = -736827111;
unsigned short var_11 = (unsigned short)20576;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 4966064892596180083ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17311067023804374709ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -147913152;
short var_6 = (short)10666;
int var_10 = -510191700;
long long int var_11 = -4427107247528755889LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 8064555497752246667ULL;
long long int var_19 = -4675383316782467437LL;
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

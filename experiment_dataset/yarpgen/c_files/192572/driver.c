#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7258;
signed char var_1 = (signed char)-85;
unsigned short var_3 = (unsigned short)14670;
unsigned int var_6 = 702171499U;
unsigned char var_10 = (unsigned char)109;
unsigned long long int var_11 = 8103860167141321340ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-4411;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3457839982U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
unsigned int var_2 = 3423479411U;
short var_3 = (short)-23496;
unsigned int var_4 = 302038146U;
signed char var_5 = (signed char)51;
signed char var_8 = (signed char)47;
unsigned long long int var_10 = 16307127673476231146ULL;
unsigned long long int var_11 = 9245080757041883819ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2148426758U;
int var_14 = -696533732;
unsigned int var_15 = 3551450192U;
unsigned int var_17 = 2388727662U;
int zero = 0;
short var_18 = (short)29164;
unsigned short var_19 = (unsigned short)40643;
unsigned int var_20 = 2021174780U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

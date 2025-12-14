#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-39;
_Bool var_11 = (_Bool)0;
int var_15 = 1382590245;
int zero = 0;
unsigned short var_17 = (unsigned short)47982;
signed char var_18 = (signed char)21;
signed char var_19 = (signed char)-84;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 10953600207291552700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

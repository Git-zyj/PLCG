#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23356;
int var_14 = -358232608;
signed char var_16 = (signed char)-5;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 911905081;
unsigned long long int var_19 = 14596501637905769178ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

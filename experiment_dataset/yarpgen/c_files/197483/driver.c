#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12122;
unsigned int var_7 = 2922651991U;
unsigned long long int var_9 = 9931737552252371616ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6264863998358172244ULL;
signed char var_17 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

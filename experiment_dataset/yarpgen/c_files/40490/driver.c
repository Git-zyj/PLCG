#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26864;
int var_3 = 1825438218;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-38;
int zero = 0;
unsigned char var_17 = (unsigned char)201;
unsigned int var_18 = 3813045878U;
void init() {
}

void checksum() {
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

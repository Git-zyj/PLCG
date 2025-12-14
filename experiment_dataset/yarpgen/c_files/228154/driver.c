#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
unsigned long long int var_7 = 5386879630606646793ULL;
unsigned short var_11 = (unsigned short)45288;
unsigned short var_12 = (unsigned short)49981;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-28574;
_Bool var_17 = (_Bool)0;
int var_18 = 1681516984;
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

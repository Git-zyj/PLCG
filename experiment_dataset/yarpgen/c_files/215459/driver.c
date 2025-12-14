#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16021740089342068353ULL;
int var_3 = 329736342;
long long int var_4 = 7104686083055558673LL;
short var_8 = (short)-158;
unsigned short var_10 = (unsigned short)48410;
int zero = 0;
short var_13 = (short)-11454;
signed char var_14 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

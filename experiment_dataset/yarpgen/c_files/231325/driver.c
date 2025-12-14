#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
signed char var_1 = (signed char)22;
long long int var_8 = 600915378922224982LL;
int var_16 = 1143873916;
int zero = 0;
unsigned int var_17 = 3129576829U;
short var_18 = (short)7340;
short var_19 = (short)4320;
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

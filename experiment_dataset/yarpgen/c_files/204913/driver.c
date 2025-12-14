#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12876059839597532634ULL;
long long int var_6 = 7756711376016843711LL;
signed char var_7 = (signed char)70;
int var_8 = -1572632025;
int zero = 0;
unsigned long long int var_13 = 11350472730540529367ULL;
unsigned long long int var_14 = 4856498041540007475ULL;
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

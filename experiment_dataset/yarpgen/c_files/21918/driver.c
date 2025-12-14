#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2896503130440825104LL;
short var_1 = (short)-15125;
long long int var_8 = 1988149638699115590LL;
signed char var_13 = (signed char)-40;
int zero = 0;
long long int var_15 = -4585619406283556230LL;
int var_16 = 1640657733;
short var_17 = (short)32622;
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

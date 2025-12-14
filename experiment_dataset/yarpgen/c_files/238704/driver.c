#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10987;
int var_16 = -973198414;
int zero = 0;
signed char var_17 = (signed char)-82;
unsigned long long int var_18 = 1561222447192027582ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 1461164560;
int var_21 = 1577351942;
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

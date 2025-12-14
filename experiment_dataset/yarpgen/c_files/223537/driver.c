#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2497960243U;
unsigned int var_4 = 624719396U;
unsigned int var_12 = 1154992471U;
unsigned int var_16 = 3223781374U;
unsigned long long int var_18 = 9271254671863778050ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)71;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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

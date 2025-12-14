#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7765468834464400140LL;
unsigned int var_3 = 2313968477U;
unsigned int var_14 = 3882370134U;
unsigned int var_15 = 4165815656U;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = 792883182;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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

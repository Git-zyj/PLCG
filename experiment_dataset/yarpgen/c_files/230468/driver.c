#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1864348436090609688LL;
long long int var_9 = 2965554679196022387LL;
signed char var_11 = (signed char)2;
unsigned int var_12 = 2821795510U;
unsigned int var_15 = 1650909463U;
signed char var_16 = (signed char)-50;
int zero = 0;
long long int var_17 = 5679906460102566655LL;
unsigned long long int var_18 = 18070894629997510670ULL;
_Bool var_19 = (_Bool)1;
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

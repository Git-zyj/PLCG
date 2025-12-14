#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-14053;
unsigned short var_8 = (unsigned short)36931;
int zero = 0;
unsigned long long int var_15 = 9214721370508152474ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-25706;
long long int var_18 = 3612843253877370895LL;
short var_19 = (short)-24726;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

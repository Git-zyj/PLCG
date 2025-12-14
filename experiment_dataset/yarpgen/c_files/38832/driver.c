#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13441512519695606052ULL;
short var_2 = (short)8441;
unsigned long long int var_3 = 56406927831476960ULL;
unsigned int var_4 = 1488581785U;
unsigned long long int var_7 = 3320003018381335660ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_15 = (short)21839;
int zero = 0;
unsigned int var_16 = 2492027592U;
unsigned short var_17 = (unsigned short)34583;
int var_18 = 1229448249;
short var_19 = (short)-23579;
void init() {
}

void checksum() {
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

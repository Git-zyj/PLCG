#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -960324832;
short var_3 = (short)-25065;
_Bool var_4 = (_Bool)0;
long long int var_7 = -2764018201777521419LL;
signed char var_8 = (signed char)107;
int var_9 = 417798761;
int var_11 = -1858892910;
long long int var_12 = -3345976687699046506LL;
int var_13 = 1993711439;
int zero = 0;
signed char var_18 = (signed char)20;
_Bool var_19 = (_Bool)0;
int var_20 = 1110463415;
unsigned long long int var_21 = 9006914284151749659ULL;
void init() {
}

void checksum() {
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

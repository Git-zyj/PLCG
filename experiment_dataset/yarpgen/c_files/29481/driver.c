#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2808280868U;
unsigned short var_2 = (unsigned short)15726;
unsigned int var_3 = 1332498765U;
unsigned int var_4 = 3763818413U;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3407921117263737329LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 831393777;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

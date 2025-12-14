#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17012774528249481156ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 938430285U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2050243094141879457LL;
int zero = 0;
unsigned short var_10 = (unsigned short)48952;
long long int var_11 = -1457424502375612067LL;
int var_12 = -18545877;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

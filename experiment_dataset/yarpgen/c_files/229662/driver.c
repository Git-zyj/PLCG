#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6856;
unsigned int var_2 = 1645378864U;
_Bool var_3 = (_Bool)0;
long long int var_5 = -4173817884777757486LL;
unsigned int var_6 = 1681075326U;
unsigned int var_9 = 2664349449U;
int zero = 0;
long long int var_10 = 3253140639064758264LL;
unsigned long long int var_11 = 16032068412558641965ULL;
unsigned long long int var_12 = 10626433650704416642ULL;
long long int var_13 = 7000772173323646879LL;
unsigned long long int var_14 = 11934762716844990379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

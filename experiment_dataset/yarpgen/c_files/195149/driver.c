#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12005576637476369835ULL;
unsigned int var_3 = 4038823179U;
long long int var_9 = -5832957060470596900LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5628548780731749368LL;
long long int var_12 = -2200870891200786779LL;
int zero = 0;
unsigned short var_17 = (unsigned short)62564;
unsigned long long int var_18 = 181341127711722992ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

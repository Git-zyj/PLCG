#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9128520105693086953LL;
unsigned int var_7 = 2212758169U;
long long int var_8 = 3016026131523575760LL;
signed char var_9 = (signed char)26;
unsigned int var_15 = 245983251U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1999050470U;
unsigned int var_21 = 1656224620U;
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

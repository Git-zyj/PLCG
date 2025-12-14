#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4251700539731956132LL;
unsigned long long int var_4 = 1792923570141671174ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 3711204406509326294ULL;
unsigned int var_10 = 4248719695U;
int zero = 0;
unsigned long long int var_11 = 10363601776014707331ULL;
signed char var_12 = (signed char)86;
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

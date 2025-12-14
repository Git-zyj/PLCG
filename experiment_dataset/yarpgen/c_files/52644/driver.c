#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38694;
unsigned long long int var_3 = 10264621452250568644ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11545336752503168857ULL;
unsigned long long int var_18 = 1639235344910793700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

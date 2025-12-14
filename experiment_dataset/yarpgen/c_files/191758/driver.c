#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30452;
unsigned long long int var_3 = 8643940788936954085ULL;
unsigned int var_4 = 3241633538U;
long long int var_5 = -9091081010181706084LL;
unsigned long long int var_7 = 12479795256058328379ULL;
unsigned short var_8 = (unsigned short)37706;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1765167790;
int var_12 = 1934713264;
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

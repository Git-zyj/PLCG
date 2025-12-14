#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4203127527U;
unsigned int var_1 = 612798083U;
short var_2 = (short)16757;
unsigned short var_4 = (unsigned short)61889;
unsigned short var_7 = (unsigned short)25131;
long long int var_8 = -722304646208119202LL;
unsigned long long int var_11 = 17669654007110566711ULL;
int zero = 0;
short var_15 = (short)5971;
short var_16 = (short)9944;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

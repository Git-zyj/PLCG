#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10275235184114078379ULL;
short var_2 = (short)-10814;
short var_6 = (short)-14095;
int var_7 = -480552058;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = -350396772;
int var_11 = -937690141;
int zero = 0;
short var_17 = (short)-32747;
long long int var_18 = -3270183437562032681LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

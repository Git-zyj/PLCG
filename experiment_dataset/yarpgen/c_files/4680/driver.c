#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7731454496869798552LL;
short var_3 = (short)16219;
unsigned long long int var_6 = 10342990932221601986ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3703829171U;
unsigned char var_12 = (unsigned char)90;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 11570506614269266158ULL;
unsigned long long int var_18 = 17437419397471092809ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
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

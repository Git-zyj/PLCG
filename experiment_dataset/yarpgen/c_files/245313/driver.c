#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9026558826535682496LL;
long long int var_2 = -6597785332825421526LL;
long long int var_3 = -7752508906063336167LL;
long long int var_4 = -4805766983499824595LL;
signed char var_6 = (signed char)-47;
unsigned long long int var_7 = 7269362122671772933ULL;
int zero = 0;
signed char var_10 = (signed char)58;
signed char var_11 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

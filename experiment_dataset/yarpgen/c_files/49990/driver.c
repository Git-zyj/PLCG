#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)66;
long long int var_7 = -2980779295323974186LL;
unsigned int var_13 = 3483672734U;
signed char var_16 = (signed char)-96;
int zero = 0;
unsigned int var_17 = 2438049367U;
int var_18 = 898556372;
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

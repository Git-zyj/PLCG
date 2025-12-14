#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)26793;
int var_17 = 1177421418;
int zero = 0;
unsigned int var_18 = 1268322277U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)45;
unsigned short var_21 = (unsigned short)18997;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

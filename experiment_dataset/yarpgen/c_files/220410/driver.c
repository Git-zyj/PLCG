#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned char var_1 = (unsigned char)18;
long long int var_12 = -8039812894726037752LL;
unsigned int var_13 = 3369194550U;
long long int var_17 = -2418249646584797758LL;
int zero = 0;
int var_18 = 2115142249;
int var_19 = 722129887;
void init() {
}

void checksum() {
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

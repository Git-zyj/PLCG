#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 346649323;
int var_3 = -970622599;
int var_4 = 625444224;
int var_6 = -669090497;
int var_8 = -769406224;
int var_9 = 775050083;
int var_12 = -1226984759;
int var_13 = 1486015839;
int zero = 0;
int var_14 = -533654259;
int var_15 = -1628265826;
int var_16 = 2137432525;
int var_17 = -18111798;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

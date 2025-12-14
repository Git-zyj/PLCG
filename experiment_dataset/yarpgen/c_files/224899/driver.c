#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1563690452;
int var_2 = -632581898;
int var_6 = -2099405741;
signed char var_7 = (signed char)28;
int zero = 0;
signed char var_11 = (signed char)-84;
short var_12 = (short)-3476;
int var_13 = -87903151;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

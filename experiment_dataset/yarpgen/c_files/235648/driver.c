#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1838550369;
int var_1 = -1780786686;
int var_2 = -2112502578;
int var_7 = -1127507663;
int var_8 = 186685836;
int var_14 = -824154115;
int var_17 = -1454663383;
int zero = 0;
int var_18 = 2093324012;
int var_19 = 639587315;
int var_20 = -724268850;
int var_21 = -1204383295;
int var_22 = -1141377832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

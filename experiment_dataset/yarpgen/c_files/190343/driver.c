#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1888692710;
unsigned long long int var_3 = 9023930515127345678ULL;
unsigned long long int var_10 = 16814561195458072500ULL;
long long int var_14 = 1426032382534473947LL;
short var_15 = (short)-29543;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
int var_19 = -664250301;
int var_20 = -1238735555;
short var_21 = (short)-4523;
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

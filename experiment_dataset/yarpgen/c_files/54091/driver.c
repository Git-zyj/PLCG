#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -531982264;
short var_13 = (short)-31545;
int var_15 = 1827993202;
int var_18 = -1784684066;
int zero = 0;
unsigned long long int var_20 = 10851875365759981616ULL;
unsigned long long int var_21 = 18431677514680408419ULL;
void init() {
}

void checksum() {
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

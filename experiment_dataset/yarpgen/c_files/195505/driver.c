#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -428059180854230839LL;
short var_6 = (short)-31560;
int var_13 = 76763305;
int zero = 0;
short var_19 = (short)22125;
unsigned int var_20 = 2910638069U;
unsigned int var_21 = 3962706888U;
void init() {
}

void checksum() {
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

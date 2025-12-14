#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7877794979634195833LL;
long long int var_7 = -8594788477613734397LL;
short var_8 = (short)-14063;
unsigned int var_10 = 2743896340U;
int zero = 0;
short var_12 = (short)-21221;
short var_13 = (short)-21954;
void init() {
}

void checksum() {
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

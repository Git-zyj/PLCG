#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1320552662U;
int var_2 = 497884152;
unsigned long long int var_3 = 6645818015240731470ULL;
unsigned short var_8 = (unsigned short)47495;
short var_9 = (short)18935;
int zero = 0;
short var_10 = (short)-4564;
unsigned int var_11 = 2846272743U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

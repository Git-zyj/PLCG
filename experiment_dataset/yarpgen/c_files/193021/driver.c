#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43327;
unsigned int var_4 = 1750661865U;
unsigned long long int var_7 = 7073829896049666536ULL;
int var_9 = -1802745616;
int zero = 0;
unsigned short var_10 = (unsigned short)49413;
unsigned short var_11 = (unsigned short)58251;
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

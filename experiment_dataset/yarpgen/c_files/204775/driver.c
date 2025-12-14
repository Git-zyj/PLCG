#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)43788;
unsigned short var_6 = (unsigned short)29311;
unsigned short var_9 = (unsigned short)49018;
int zero = 0;
unsigned short var_10 = (unsigned short)44451;
unsigned short var_11 = (unsigned short)11174;
unsigned short var_12 = (unsigned short)27911;
unsigned short var_13 = (unsigned short)291;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

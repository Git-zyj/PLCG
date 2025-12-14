#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5134715598577181931ULL;
signed char var_9 = (signed char)-54;
long long int var_10 = -6369003569132366980LL;
int zero = 0;
long long int var_16 = 7029675131742601939LL;
unsigned long long int var_17 = 17465635158409760062ULL;
unsigned short var_18 = (unsigned short)19180;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

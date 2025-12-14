#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14191625056566930196ULL;
unsigned long long int var_1 = 4607484828659935951ULL;
unsigned int var_3 = 3371141809U;
signed char var_5 = (signed char)105;
long long int var_6 = 6874201470151551755LL;
unsigned long long int var_7 = 15224339773431216105ULL;
int var_11 = 742182999;
int zero = 0;
unsigned long long int var_15 = 7638748563006030271ULL;
unsigned long long int var_16 = 2604380055391411740ULL;
int var_17 = -1287927200;
unsigned int var_18 = 2947107956U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2513610981554489831ULL;
short var_4 = (short)26174;
unsigned int var_6 = 447759073U;
unsigned short var_9 = (unsigned short)60778;
unsigned int var_10 = 1354284688U;
long long int var_11 = 3073970903365993402LL;
int zero = 0;
short var_13 = (short)31413;
short var_14 = (short)-9558;
long long int var_15 = 9006575604038632944LL;
unsigned int var_16 = 3709546413U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

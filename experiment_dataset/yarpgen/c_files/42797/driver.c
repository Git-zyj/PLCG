#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49748;
unsigned long long int var_1 = 5850855183808482025ULL;
unsigned long long int var_4 = 14264867294495491180ULL;
long long int var_5 = -2682304740512908524LL;
short var_10 = (short)-27409;
unsigned int var_11 = 3765576244U;
int zero = 0;
unsigned short var_13 = (unsigned short)31734;
unsigned int var_14 = 1347911188U;
long long int var_15 = -8400943097309531955LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

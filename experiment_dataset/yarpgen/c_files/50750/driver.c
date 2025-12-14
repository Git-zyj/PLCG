#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5536988777434412058LL;
unsigned short var_1 = (unsigned short)31489;
short var_2 = (short)23896;
short var_9 = (short)2285;
int zero = 0;
unsigned long long int var_13 = 16139622359064230776ULL;
long long int var_14 = -1328063765544114451LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 337397898;
unsigned long long int var_2 = 2176946715689407847ULL;
unsigned int var_3 = 1462124316U;
long long int var_4 = 7979456201473812010LL;
long long int var_5 = 6490476991038297046LL;
unsigned long long int var_6 = 16921152832946400690ULL;
long long int var_9 = 2520966831321148749LL;
int zero = 0;
short var_10 = (short)21789;
unsigned char var_11 = (unsigned char)23;
long long int var_12 = 248913928536126301LL;
signed char var_13 = (signed char)-25;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7644;
unsigned long long int var_8 = 14912207383776513948ULL;
long long int var_9 = -1533448526071780875LL;
long long int var_11 = -4262421102263504916LL;
unsigned long long int var_12 = 13500464007934335594ULL;
int zero = 0;
long long int var_13 = -3702362088418790729LL;
int var_14 = -424851601;
int var_15 = -987537046;
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

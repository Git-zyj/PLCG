#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4251979837475412205LL;
unsigned long long int var_1 = 13481603365874946557ULL;
unsigned long long int var_2 = 2376238129539409164ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 4254869365843560785ULL;
signed char var_9 = (signed char)103;
unsigned long long int var_10 = 9211725848132096749ULL;
int zero = 0;
unsigned int var_11 = 2058285313U;
unsigned long long int var_12 = 7351161527088169669ULL;
long long int var_13 = -4464949058110297966LL;
void init() {
}

void checksum() {
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

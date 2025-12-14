#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)(-127 - 1);
_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)147;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 6500145U;
unsigned long long int var_11 = 16107842023119524568ULL;
int zero = 0;
short var_17 = (short)23152;
int var_18 = -1223442014;
unsigned int var_19 = 4194124714U;
long long int var_20 = 397490528426368725LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

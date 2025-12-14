#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1340486659U;
long long int var_2 = -4498624781967427209LL;
int var_4 = -171125758;
unsigned int var_6 = 2628717543U;
int var_7 = 1670711413;
unsigned int var_8 = 3500502186U;
short var_9 = (short)-6931;
unsigned int var_17 = 743821192U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 138349308U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

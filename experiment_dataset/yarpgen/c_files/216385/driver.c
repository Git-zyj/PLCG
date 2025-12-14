#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 502961888;
unsigned int var_2 = 2729337107U;
int var_4 = 252913980;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-13088;
unsigned long long int var_7 = 13580076813896513985ULL;
int var_8 = -1517401792;
unsigned char var_9 = (unsigned char)165;
unsigned int var_10 = 3133559241U;
int zero = 0;
unsigned long long int var_11 = 291342673097238043ULL;
long long int var_12 = -1830934102499967569LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

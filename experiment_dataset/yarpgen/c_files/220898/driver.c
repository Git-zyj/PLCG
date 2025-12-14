#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8062;
unsigned long long int var_2 = 10988056496116967447ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)975;
_Bool var_5 = (_Bool)1;
short var_6 = (short)2181;
int var_8 = -1103661237;
long long int var_9 = 6329680293172148381LL;
int zero = 0;
long long int var_11 = -7656603656643123831LL;
short var_12 = (short)-14172;
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

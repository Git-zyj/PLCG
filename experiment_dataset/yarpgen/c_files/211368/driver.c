#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3562767430U;
unsigned long long int var_1 = 5768218082882191807ULL;
short var_2 = (short)25591;
unsigned int var_3 = 4159781158U;
long long int var_4 = -9090024835602672244LL;
unsigned long long int var_5 = 17459346158913101802ULL;
unsigned short var_7 = (unsigned short)15298;
unsigned char var_8 = (unsigned char)165;
int var_9 = 1200677223;
int zero = 0;
int var_10 = -2088406862;
signed char var_11 = (signed char)114;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

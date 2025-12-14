#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7111894208201100495LL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)45;
unsigned int var_9 = 2912825459U;
long long int var_14 = -5757847301719796240LL;
long long int var_17 = -3854191205141208891LL;
int zero = 0;
int var_18 = -2083871060;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)193;
void init() {
}

void checksum() {
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

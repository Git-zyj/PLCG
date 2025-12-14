#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3217406501582227796LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_7 = 9862711620948787216ULL;
long long int var_8 = 276240104325910100LL;
unsigned short var_9 = (unsigned short)72;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2142955349U;
signed char var_13 = (signed char)106;
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

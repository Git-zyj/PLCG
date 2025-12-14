#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30339;
unsigned long long int var_1 = 15897690417828041029ULL;
unsigned long long int var_2 = 992121339175086348ULL;
short var_3 = (short)22174;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)21;
int var_10 = 123330722;
int zero = 0;
long long int var_11 = -3542427478389099275LL;
long long int var_12 = -8980569086297345360LL;
long long int var_13 = 4034516776033182839LL;
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

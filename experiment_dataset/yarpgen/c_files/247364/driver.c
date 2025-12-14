#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3353605651584989286LL;
unsigned short var_8 = (unsigned short)29013;
long long int var_10 = -2437440396590275511LL;
int zero = 0;
signed char var_13 = (signed char)68;
long long int var_14 = -3557118783839533397LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 14488219394397932433ULL;
long long int var_9 = 8619240255767137777LL;
signed char var_13 = (signed char)50;
unsigned int var_16 = 3055660480U;
unsigned char var_18 = (unsigned char)90;
int zero = 0;
long long int var_20 = -4601118272640091467LL;
int var_21 = 1728030368;
long long int var_22 = -7269160280421715725LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

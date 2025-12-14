#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8748663379422515483LL;
unsigned long long int var_4 = 3272474212519285150ULL;
short var_7 = (short)-17698;
int var_9 = -334670028;
int zero = 0;
signed char var_10 = (signed char)-35;
long long int var_11 = 695969163383416189LL;
long long int var_12 = -4004347823663317538LL;
unsigned int var_13 = 3870629845U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

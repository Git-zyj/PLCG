#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7544628564549167889LL;
signed char var_3 = (signed char)-100;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10907359679026746057ULL;
unsigned long long int var_7 = 221820326621033298ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 780281605026705746ULL;
unsigned int var_11 = 2573512079U;
signed char var_12 = (signed char)14;
short var_13 = (short)-31474;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2054660711;
unsigned long long int var_1 = 18037513938990873130ULL;
int var_2 = 2064675801;
unsigned long long int var_3 = 8090119806641189892ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2908279090U;
unsigned int var_8 = 2218331548U;
int zero = 0;
unsigned int var_10 = 2731451525U;
signed char var_11 = (signed char)-65;
int var_12 = 895455911;
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

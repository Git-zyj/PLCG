#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6852270721429087190LL;
unsigned long long int var_2 = 18230497949868002583ULL;
int var_7 = 807940300;
unsigned long long int var_14 = 13778582138701247946ULL;
int zero = 0;
short var_18 = (short)-27063;
int var_19 = -163257891;
unsigned short var_20 = (unsigned short)36374;
unsigned long long int var_21 = 3085822862537732011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

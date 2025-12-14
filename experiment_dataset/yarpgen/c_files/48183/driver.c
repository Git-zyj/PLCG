#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2440456941242489029LL;
long long int var_8 = 4775767435816666915LL;
unsigned int var_10 = 2072029920U;
unsigned long long int var_15 = 9731983568684521962ULL;
int zero = 0;
unsigned long long int var_17 = 14848583438360856951ULL;
signed char var_18 = (signed char)64;
short var_19 = (short)-743;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

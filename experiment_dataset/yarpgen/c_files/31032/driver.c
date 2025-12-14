#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3416354672179320215LL;
long long int var_2 = 8294452985019717610LL;
signed char var_5 = (signed char)-123;
unsigned char var_10 = (unsigned char)104;
unsigned short var_13 = (unsigned short)26341;
unsigned int var_14 = 2718569851U;
int zero = 0;
long long int var_17 = -3632236630167035657LL;
int var_18 = -166784053;
unsigned int var_19 = 2648752769U;
unsigned long long int var_20 = 13449691680960464913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

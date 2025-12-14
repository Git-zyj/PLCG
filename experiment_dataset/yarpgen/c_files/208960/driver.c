#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2540345989U;
unsigned int var_2 = 752309624U;
long long int var_5 = 4535488453038427994LL;
long long int var_9 = -1962575264285870799LL;
int zero = 0;
signed char var_11 = (signed char)-66;
long long int var_12 = 1243202608697077379LL;
signed char var_13 = (signed char)57;
unsigned char var_14 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

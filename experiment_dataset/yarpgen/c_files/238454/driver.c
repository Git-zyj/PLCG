#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5021024988354846948LL;
signed char var_9 = (signed char)-46;
unsigned int var_12 = 2386058954U;
unsigned int var_14 = 1093956283U;
int zero = 0;
unsigned short var_18 = (unsigned short)12308;
unsigned char var_19 = (unsigned char)172;
unsigned int var_20 = 919633765U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
unsigned long long int var_3 = 4026912186813902364ULL;
int var_4 = 1073498052;
int var_9 = 1348192858;
int zero = 0;
signed char var_16 = (signed char)-40;
signed char var_17 = (signed char)54;
long long int var_18 = 9203120518088684786LL;
long long int var_19 = 1878042368308719993LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

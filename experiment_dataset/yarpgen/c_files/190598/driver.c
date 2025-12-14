#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2103650473;
unsigned long long int var_2 = 16248444301750527984ULL;
unsigned char var_4 = (unsigned char)246;
unsigned long long int var_6 = 2411293721357668904ULL;
unsigned long long int var_9 = 6296977333171449260ULL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
unsigned char var_19 = (unsigned char)168;
unsigned long long int var_20 = 3581949948592181012ULL;
void init() {
}

void checksum() {
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

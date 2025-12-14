#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 530225438U;
int var_3 = 2086190856;
unsigned char var_4 = (unsigned char)196;
long long int var_9 = 7150029099961082186LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12034755359012939906ULL;
long long int var_12 = 2411501717344020308LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

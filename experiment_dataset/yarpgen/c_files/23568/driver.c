#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned char var_1 = (unsigned char)220;
unsigned int var_9 = 461120640U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)69;
unsigned int var_17 = 2317491270U;
unsigned int var_18 = 3082561749U;
unsigned int var_19 = 1537080639U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)58083;
unsigned short var_9 = (unsigned short)3579;
long long int var_10 = 5840536517378796284LL;
unsigned short var_11 = (unsigned short)59766;
int zero = 0;
unsigned long long int var_16 = 15031838792469948671ULL;
unsigned int var_17 = 1429474965U;
signed char var_18 = (signed char)34;
unsigned long long int var_19 = 12583385253578060784ULL;
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

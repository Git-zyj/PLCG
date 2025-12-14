#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5247980958013786425LL;
short var_3 = (short)14508;
unsigned char var_9 = (unsigned char)141;
int zero = 0;
unsigned long long int var_12 = 4101793462748344443ULL;
long long int var_13 = -4476666256022182340LL;
short var_14 = (short)-1858;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

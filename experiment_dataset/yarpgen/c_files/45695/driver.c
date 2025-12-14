#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2687557779U;
unsigned int var_5 = 985287184U;
unsigned long long int var_6 = 12221239012779975314ULL;
unsigned short var_7 = (unsigned short)33473;
unsigned int var_9 = 1982963811U;
int var_11 = -776986933;
unsigned long long int var_12 = 17841864025067194336ULL;
unsigned int var_13 = 3384641492U;
int zero = 0;
unsigned short var_14 = (unsigned short)15640;
unsigned int var_15 = 2376386844U;
unsigned long long int var_16 = 13346835027713699841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

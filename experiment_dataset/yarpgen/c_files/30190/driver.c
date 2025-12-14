#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3051452918U;
signed char var_10 = (signed char)57;
int var_12 = -716616999;
int zero = 0;
int var_20 = -67555408;
long long int var_21 = 3635188197283911928LL;
unsigned short var_22 = (unsigned short)23755;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

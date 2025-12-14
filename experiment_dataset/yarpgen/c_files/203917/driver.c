#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1932149399;
long long int var_4 = -3764382166630853815LL;
unsigned int var_6 = 952696337U;
int zero = 0;
long long int var_16 = -2243576640479385608LL;
signed char var_17 = (signed char)91;
unsigned char var_18 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

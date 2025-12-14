#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1733452428776299230LL;
signed char var_3 = (signed char)-54;
unsigned long long int var_5 = 2333547027718644141ULL;
unsigned int var_6 = 2483577205U;
long long int var_9 = -1594646538993603922LL;
int zero = 0;
int var_10 = 1208599973;
long long int var_11 = 3481730476904117971LL;
unsigned char var_12 = (unsigned char)139;
int var_13 = 1710086660;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

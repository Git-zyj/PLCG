#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3124299215886097165LL;
int var_6 = -949515716;
unsigned long long int var_7 = 9613926451430703029ULL;
int var_8 = -932259153;
signed char var_10 = (signed char)-22;
int zero = 0;
unsigned char var_12 = (unsigned char)93;
long long int var_13 = -2724330820785044103LL;
unsigned short var_14 = (unsigned short)16937;
void init() {
}

void checksum() {
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

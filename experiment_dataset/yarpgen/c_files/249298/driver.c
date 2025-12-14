#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
int var_9 = -108978324;
signed char var_10 = (signed char)-28;
unsigned char var_15 = (unsigned char)17;
long long int var_16 = 2519455277576182557LL;
int zero = 0;
long long int var_19 = -6804800342863490235LL;
unsigned short var_20 = (unsigned short)26954;
unsigned short var_21 = (unsigned short)49224;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

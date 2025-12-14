#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
signed char var_4 = (signed char)-16;
unsigned char var_5 = (unsigned char)243;
long long int var_11 = -4739209183394819876LL;
unsigned int var_12 = 3315565416U;
int zero = 0;
long long int var_14 = -2001418363478030777LL;
int var_15 = 320508675;
long long int var_16 = 2459113908908762651LL;
signed char var_17 = (signed char)25;
long long int var_18 = 5530482781347208900LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

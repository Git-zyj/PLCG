#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
long long int var_2 = -228904562999912112LL;
long long int var_3 = -4271840728883690124LL;
short var_5 = (short)-27990;
long long int var_7 = -34876898902770537LL;
int var_8 = -1725860766;
int zero = 0;
long long int var_10 = 1489304156216340097LL;
short var_11 = (short)20515;
int var_12 = -451052544;
unsigned char var_13 = (unsigned char)129;
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

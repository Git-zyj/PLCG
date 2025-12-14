#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10702444186917555581ULL;
unsigned int var_7 = 3601379819U;
unsigned short var_11 = (unsigned short)22455;
int zero = 0;
long long int var_20 = 8867904685873439340LL;
signed char var_21 = (signed char)-22;
unsigned long long int var_22 = 12823957557369408070ULL;
int var_23 = -894453012;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

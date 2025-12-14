#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4068004692U;
long long int var_4 = 8422685762449905688LL;
unsigned char var_8 = (unsigned char)159;
int zero = 0;
long long int var_10 = -6128628341539489259LL;
unsigned int var_11 = 3087156642U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

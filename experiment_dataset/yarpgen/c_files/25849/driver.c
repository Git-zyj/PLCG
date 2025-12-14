#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 7589928839487965206LL;
long long int var_10 = 691544642696358348LL;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
unsigned char var_14 = (unsigned char)102;
unsigned char var_15 = (unsigned char)178;
long long int var_16 = -4910571793434731868LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1025931935;
long long int var_2 = -6835949531609223387LL;
unsigned int var_5 = 721075174U;
int zero = 0;
unsigned long long int var_12 = 80409328779648077ULL;
unsigned char var_13 = (unsigned char)180;
unsigned char var_14 = (unsigned char)131;
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

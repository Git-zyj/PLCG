#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3581844568687604561LL;
int var_4 = 57295649;
unsigned char var_10 = (unsigned char)196;
int zero = 0;
unsigned long long int var_16 = 15174471109267782654ULL;
unsigned long long int var_17 = 11492542192522993743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

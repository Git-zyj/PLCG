#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7655084531398064876LL;
unsigned long long int var_5 = 5507691064262196172ULL;
int zero = 0;
int var_10 = -2119834271;
unsigned short var_11 = (unsigned short)41769;
unsigned char var_12 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

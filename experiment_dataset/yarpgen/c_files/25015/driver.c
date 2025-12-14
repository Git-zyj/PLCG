#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3673621859U;
unsigned int var_2 = 2672520287U;
unsigned short var_3 = (unsigned short)20743;
unsigned char var_4 = (unsigned char)76;
long long int var_5 = -7554946766882237094LL;
unsigned long long int var_7 = 608682839678642187ULL;
unsigned int var_9 = 1590798600U;
int zero = 0;
unsigned int var_11 = 3630619964U;
int var_12 = -1361709692;
long long int var_13 = 2823842604149703678LL;
void init() {
}

void checksum() {
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

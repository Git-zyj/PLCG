#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned char var_2 = (unsigned char)221;
unsigned long long int var_6 = 3096339592023047577ULL;
long long int var_7 = 2356294123948556870LL;
unsigned int var_9 = 2031029395U;
int zero = 0;
long long int var_10 = 316767165997389364LL;
unsigned char var_11 = (unsigned char)134;
signed char var_12 = (signed char)-126;
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

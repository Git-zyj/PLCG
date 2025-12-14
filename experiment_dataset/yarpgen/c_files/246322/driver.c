#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3436167988850461152LL;
unsigned long long int var_4 = 3122719638525988371ULL;
unsigned int var_16 = 2586244956U;
int var_17 = -752510847;
int zero = 0;
unsigned short var_19 = (unsigned short)41480;
unsigned short var_20 = (unsigned short)51414;
signed char var_21 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

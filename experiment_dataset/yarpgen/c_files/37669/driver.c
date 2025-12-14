#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1707528321;
unsigned short var_8 = (unsigned short)50052;
long long int var_14 = 6530752564163706793LL;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned int var_19 = 4162611611U;
unsigned long long int var_20 = 4723821080111515318ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

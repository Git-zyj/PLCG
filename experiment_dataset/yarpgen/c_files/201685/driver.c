#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8518486539503401447ULL;
int var_8 = 1825649783;
unsigned short var_9 = (unsigned short)27942;
int zero = 0;
unsigned int var_13 = 3619949105U;
unsigned short var_14 = (unsigned short)55817;
void init() {
}

void checksum() {
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

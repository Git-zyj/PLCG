#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20553;
unsigned int var_5 = 2661983344U;
unsigned long long int var_6 = 5672316826610791173ULL;
unsigned short var_9 = (unsigned short)50325;
int zero = 0;
unsigned short var_10 = (unsigned short)28632;
signed char var_11 = (signed char)-16;
unsigned short var_12 = (unsigned short)63958;
unsigned int var_13 = 138720148U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

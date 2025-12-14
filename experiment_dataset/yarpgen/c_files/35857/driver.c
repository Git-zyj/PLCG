#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2150881492195541506LL;
unsigned short var_2 = (unsigned short)15462;
unsigned char var_5 = (unsigned char)29;
long long int var_11 = -5134634996322271866LL;
unsigned short var_13 = (unsigned short)12702;
int zero = 0;
long long int var_14 = 1666641779232768346LL;
unsigned int var_15 = 3660824699U;
unsigned long long int var_16 = 928632591692629056ULL;
unsigned int var_17 = 747405036U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

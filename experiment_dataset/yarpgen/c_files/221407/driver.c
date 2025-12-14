#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -303830717;
signed char var_6 = (signed char)-88;
unsigned long long int var_9 = 2633030481203273550ULL;
unsigned int var_11 = 3565727395U;
signed char var_12 = (signed char)-109;
int zero = 0;
long long int var_17 = 7187418716942305731LL;
long long int var_18 = 1164303406554487965LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

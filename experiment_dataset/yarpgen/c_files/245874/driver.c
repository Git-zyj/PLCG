#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 242613534;
int var_15 = 1322477473;
int var_16 = -1540694951;
int var_17 = -1028974215;
int var_18 = 451714748;
int zero = 0;
int var_19 = -1225534980;
int var_20 = 1633336102;
void init() {
}

void checksum() {
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

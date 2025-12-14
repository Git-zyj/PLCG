#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13508691287650256244ULL;
int var_10 = 1767796553;
long long int var_11 = 6141790354129735713LL;
int zero = 0;
short var_12 = (short)-25600;
unsigned int var_13 = 2570275620U;
unsigned int var_14 = 1676368262U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

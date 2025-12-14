#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8120162956224754610LL;
unsigned long long int var_6 = 12650476384247338108ULL;
unsigned short var_9 = (unsigned short)13449;
unsigned long long int var_11 = 6558744399171300973ULL;
unsigned char var_12 = (unsigned char)14;
int zero = 0;
long long int var_15 = -3028230158182754224LL;
unsigned short var_16 = (unsigned short)36105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

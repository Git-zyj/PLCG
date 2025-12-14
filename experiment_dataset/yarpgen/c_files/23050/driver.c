#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4363811928960782911LL;
unsigned char var_1 = (unsigned char)107;
long long int var_2 = 3449992904456101627LL;
short var_6 = (short)23880;
long long int var_11 = 866042815592611085LL;
int zero = 0;
unsigned char var_13 = (unsigned char)196;
short var_14 = (short)-5400;
unsigned long long int var_15 = 5283196023423141153ULL;
unsigned char var_16 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

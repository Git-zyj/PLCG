#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4114961711588724061LL;
int var_5 = -1042394548;
unsigned long long int var_6 = 16335737655700130383ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)102;
short var_13 = (short)27297;
short var_14 = (short)22943;
short var_15 = (short)13357;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

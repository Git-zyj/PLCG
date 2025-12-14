#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 74251740;
int var_5 = -845458683;
int var_6 = -716072447;
long long int var_7 = 2379528941713128579LL;
long long int var_8 = -1157605029681892322LL;
int zero = 0;
unsigned char var_10 = (unsigned char)95;
unsigned char var_11 = (unsigned char)31;
long long int var_12 = -2319798172329312377LL;
int var_13 = -1254310571;
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

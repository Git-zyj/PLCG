#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)31;
signed char var_4 = (signed char)42;
unsigned char var_7 = (unsigned char)241;
unsigned int var_9 = 2973425221U;
signed char var_10 = (signed char)80;
int zero = 0;
unsigned long long int var_14 = 4092131371956880264ULL;
unsigned long long int var_15 = 630355276543488636ULL;
void init() {
}

void checksum() {
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

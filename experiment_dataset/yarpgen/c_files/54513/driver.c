#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6111509603041162980LL;
unsigned char var_1 = (unsigned char)103;
unsigned char var_3 = (unsigned char)251;
unsigned short var_4 = (unsigned short)29266;
long long int var_12 = 3283616154241914876LL;
unsigned char var_13 = (unsigned char)123;
int zero = 0;
long long int var_18 = -6140694093008643722LL;
int var_19 = 103448311;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

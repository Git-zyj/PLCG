#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1079719922;
unsigned char var_3 = (unsigned char)224;
unsigned short var_4 = (unsigned short)42727;
unsigned short var_9 = (unsigned short)20651;
unsigned short var_11 = (unsigned short)64766;
unsigned short var_12 = (unsigned short)30132;
unsigned short var_13 = (unsigned short)31615;
unsigned char var_18 = (unsigned char)245;
unsigned short var_19 = (unsigned short)13406;
int zero = 0;
int var_20 = 1583929465;
unsigned short var_21 = (unsigned short)61800;
unsigned short var_22 = (unsigned short)55965;
unsigned short var_23 = (unsigned short)18104;
int var_24 = 914703740;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

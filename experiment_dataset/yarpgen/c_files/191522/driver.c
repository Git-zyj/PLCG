#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41584;
short var_11 = (short)17022;
int zero = 0;
int var_12 = 868336625;
unsigned long long int var_13 = 10926531577949308929ULL;
unsigned long long int var_14 = 16159272525161178484ULL;
signed char var_15 = (signed char)-19;
unsigned short var_16 = (unsigned short)40933;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

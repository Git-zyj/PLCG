#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8987988939111588871ULL;
unsigned long long int var_4 = 9964612130090794213ULL;
unsigned short var_6 = (unsigned short)17172;
unsigned int var_11 = 154794570U;
int zero = 0;
short var_12 = (short)4961;
unsigned short var_13 = (unsigned short)36383;
unsigned short var_14 = (unsigned short)35997;
unsigned short var_15 = (unsigned short)51211;
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

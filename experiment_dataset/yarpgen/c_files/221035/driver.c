#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-95;
signed char var_3 = (signed char)122;
unsigned short var_5 = (unsigned short)10659;
unsigned short var_7 = (unsigned short)6643;
unsigned short var_9 = (unsigned short)62698;
unsigned int var_10 = 813167866U;
unsigned int var_11 = 3982431313U;
int zero = 0;
unsigned short var_12 = (unsigned short)51357;
unsigned short var_13 = (unsigned short)29034;
short var_14 = (short)28771;
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

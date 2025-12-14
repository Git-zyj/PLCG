#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17924;
signed char var_5 = (signed char)118;
short var_8 = (short)18137;
long long int var_12 = -7293426970072441777LL;
unsigned char var_13 = (unsigned char)116;
int var_15 = -640446088;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
int var_18 = -1091182344;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

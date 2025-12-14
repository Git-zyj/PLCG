#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)115;
long long int var_4 = -4545549188533764549LL;
unsigned char var_6 = (unsigned char)13;
unsigned int var_9 = 3115508381U;
unsigned short var_15 = (unsigned short)32349;
int zero = 0;
unsigned int var_18 = 1876728274U;
unsigned char var_19 = (unsigned char)7;
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

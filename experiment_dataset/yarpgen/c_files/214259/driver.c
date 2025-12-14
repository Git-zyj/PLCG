#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51857;
unsigned short var_1 = (unsigned short)6622;
unsigned char var_8 = (unsigned char)86;
unsigned short var_12 = (unsigned short)32150;
int var_16 = -490895106;
int var_17 = -1513471536;
int zero = 0;
unsigned long long int var_20 = 8325443768335715324ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

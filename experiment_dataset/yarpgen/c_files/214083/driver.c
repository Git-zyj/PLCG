#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4620707797370086639LL;
unsigned short var_1 = (unsigned short)18081;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-79;
unsigned char var_6 = (unsigned char)1;
signed char var_8 = (signed char)65;
int zero = 0;
short var_11 = (short)-12300;
unsigned long long int var_12 = 14356878991531471384ULL;
unsigned int var_13 = 1784221042U;
void init() {
}

void checksum() {
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

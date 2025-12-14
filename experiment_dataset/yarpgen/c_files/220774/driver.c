#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1498674949;
int var_5 = -1973155685;
unsigned char var_11 = (unsigned char)81;
short var_12 = (short)22395;
int zero = 0;
int var_17 = -1949277841;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

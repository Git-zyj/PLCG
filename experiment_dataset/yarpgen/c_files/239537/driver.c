#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3532309585541310868LL;
unsigned char var_3 = (unsigned char)68;
unsigned short var_6 = (unsigned short)55180;
short var_7 = (short)10973;
int zero = 0;
unsigned char var_11 = (unsigned char)100;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8469256111395024550LL;
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

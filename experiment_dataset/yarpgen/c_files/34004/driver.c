#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3595506358445241065LL;
signed char var_5 = (signed char)-6;
unsigned long long int var_7 = 10406339481401418469ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)215;
int zero = 0;
unsigned short var_11 = (unsigned short)31124;
short var_12 = (short)-11805;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

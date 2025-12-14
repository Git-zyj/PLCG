#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -558821740;
unsigned short var_5 = (unsigned short)27041;
unsigned char var_8 = (unsigned char)55;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
short var_17 = (short)-16217;
unsigned char var_18 = (unsigned char)96;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)6154;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

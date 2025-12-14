#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1444253194578347524LL;
int var_5 = 2056125511;
signed char var_6 = (signed char)100;
unsigned char var_10 = (unsigned char)214;
short var_12 = (short)-26059;
unsigned short var_13 = (unsigned short)62099;
unsigned int var_14 = 3993588136U;
int zero = 0;
unsigned short var_19 = (unsigned short)10710;
unsigned char var_20 = (unsigned char)111;
unsigned short var_21 = (unsigned short)25172;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

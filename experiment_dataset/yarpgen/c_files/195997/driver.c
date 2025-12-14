#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34575;
short var_10 = (short)3574;
unsigned char var_11 = (unsigned char)52;
int zero = 0;
unsigned char var_17 = (unsigned char)146;
unsigned short var_18 = (unsigned short)15452;
long long int var_19 = -1701264691480525379LL;
unsigned char var_20 = (unsigned char)220;
short var_21 = (short)-6479;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1798986177;
short var_4 = (short)-8472;
short var_5 = (short)-18766;
short var_6 = (short)-7773;
int var_7 = -1823180660;
long long int var_8 = -8374940945793667162LL;
unsigned long long int var_10 = 17940463750172306575ULL;
long long int var_12 = 3508822812136513864LL;
unsigned short var_14 = (unsigned short)23969;
int zero = 0;
signed char var_15 = (signed char)116;
unsigned char var_16 = (unsigned char)208;
int var_17 = -91200458;
signed char var_18 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

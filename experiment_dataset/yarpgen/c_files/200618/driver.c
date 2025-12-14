#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4185966522U;
long long int var_3 = 8546160572107208234LL;
short var_4 = (short)-22872;
unsigned int var_5 = 623169871U;
unsigned short var_7 = (unsigned short)8699;
int var_8 = -1592330771;
unsigned short var_9 = (unsigned short)24226;
int var_10 = 2019973542;
unsigned int var_11 = 3336481559U;
unsigned int var_12 = 1957120559U;
long long int var_14 = 2665709158367902931LL;
short var_15 = (short)-27696;
unsigned short var_16 = (unsigned short)41434;
int var_17 = 1042842260;
long long int var_18 = -7117531918226140563LL;
unsigned short var_19 = (unsigned short)39805;
int zero = 0;
short var_20 = (short)-29577;
long long int var_21 = 9181828483082088944LL;
unsigned short var_22 = (unsigned short)47657;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)170;
long long int var_9 = -878766163584379215LL;
short var_17 = (short)5985;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
unsigned char var_20 = (unsigned char)183;
unsigned short var_21 = (unsigned short)22910;
unsigned char var_22 = (unsigned char)70;
unsigned char var_23 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

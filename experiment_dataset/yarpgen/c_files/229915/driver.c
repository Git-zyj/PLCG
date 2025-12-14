#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
unsigned char var_2 = (unsigned char)92;
short var_3 = (short)12296;
short var_4 = (short)-7786;
unsigned int var_6 = 950898872U;
unsigned char var_8 = (unsigned char)219;
int var_9 = -1223336968;
int zero = 0;
unsigned char var_10 = (unsigned char)137;
unsigned short var_11 = (unsigned short)23775;
long long int var_12 = -1908310631975756384LL;
unsigned long long int var_13 = 10283472486021524072ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1203211447U;
unsigned int var_2 = 3180210360U;
unsigned long long int var_9 = 3337083248235711098ULL;
short var_11 = (short)-18618;
long long int var_13 = 6979588557205082367LL;
unsigned short var_14 = (unsigned short)50831;
unsigned char var_18 = (unsigned char)98;
unsigned long long int var_19 = 15603385518840524478ULL;
int zero = 0;
unsigned int var_20 = 3394489503U;
unsigned short var_21 = (unsigned short)5863;
unsigned long long int var_22 = 16837933232776133683ULL;
unsigned long long int var_23 = 1861467499526361525ULL;
void init() {
}

void checksum() {
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

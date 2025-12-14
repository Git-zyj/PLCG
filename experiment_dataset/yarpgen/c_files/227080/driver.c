#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -200741066358673971LL;
long long int var_3 = 7112061072774321584LL;
unsigned int var_9 = 2442953934U;
long long int var_12 = -1156150650234368907LL;
unsigned char var_14 = (unsigned char)54;
int zero = 0;
unsigned char var_20 = (unsigned char)150;
short var_21 = (short)-17256;
int var_22 = -913302412;
short var_23 = (short)15509;
int var_24 = 1367410500;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

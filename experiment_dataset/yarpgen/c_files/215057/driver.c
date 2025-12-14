#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8687;
long long int var_5 = 8067274332534687483LL;
int var_7 = -1468456537;
unsigned int var_8 = 2445137796U;
short var_9 = (short)-27479;
unsigned char var_10 = (unsigned char)152;
short var_11 = (short)17352;
unsigned short var_12 = (unsigned short)44528;
_Bool var_13 = (_Bool)1;
int var_15 = 1630783875;
int var_16 = -828381912;
int zero = 0;
int var_19 = 1846328797;
int var_20 = -521164238;
unsigned char var_21 = (unsigned char)22;
short var_22 = (short)-27807;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

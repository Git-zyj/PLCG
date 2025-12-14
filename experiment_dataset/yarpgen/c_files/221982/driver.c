#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17553;
unsigned long long int var_3 = 10492430604341526877ULL;
unsigned char var_5 = (unsigned char)164;
unsigned long long int var_6 = 853156268727139313ULL;
unsigned char var_7 = (unsigned char)1;
short var_9 = (short)690;
long long int var_12 = -7699177407821695422LL;
unsigned int var_14 = 3863553587U;
int zero = 0;
unsigned char var_15 = (unsigned char)63;
long long int var_16 = 6410669218350075530LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

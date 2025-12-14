#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned short var_3 = (unsigned short)7739;
unsigned long long int var_5 = 17074566154134717854ULL;
short var_6 = (short)-25291;
long long int var_7 = -8052010617106103184LL;
short var_9 = (short)23155;
long long int var_10 = -8821287368839375379LL;
long long int var_11 = -6104222273511030442LL;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned long long int var_16 = 17877430037325551602ULL;
unsigned char var_17 = (unsigned char)175;
long long int var_18 = 7548427414312429126LL;
unsigned int var_19 = 388131718U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

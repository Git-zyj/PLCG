#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4156325292U;
short var_3 = (short)-29845;
long long int var_4 = 7336724490622236176LL;
int var_5 = -651388178;
unsigned long long int var_6 = 11015294915164177327ULL;
unsigned int var_9 = 2130471994U;
short var_10 = (short)-2799;
int zero = 0;
unsigned int var_12 = 3775792356U;
unsigned char var_13 = (unsigned char)2;
unsigned int var_14 = 4242750492U;
unsigned long long int var_15 = 12230689907821644144ULL;
unsigned long long int var_16 = 13571175503805892377ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 163655241804042780LL;
unsigned long long int var_1 = 5564790624773631239ULL;
short var_2 = (short)10428;
unsigned short var_4 = (unsigned short)3081;
long long int var_8 = 7986876555754197344LL;
unsigned char var_13 = (unsigned char)112;
unsigned char var_17 = (unsigned char)27;
int zero = 0;
unsigned int var_20 = 1458735475U;
int var_21 = 1662735668;
long long int var_22 = -623634199938604600LL;
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

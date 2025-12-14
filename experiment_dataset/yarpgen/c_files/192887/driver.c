#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned char var_2 = (unsigned char)177;
unsigned short var_3 = (unsigned short)39096;
unsigned char var_4 = (unsigned char)95;
unsigned long long int var_6 = 5237898828052435334ULL;
long long int var_7 = -5198889005127039594LL;
unsigned short var_8 = (unsigned short)6525;
short var_9 = (short)3238;
unsigned short var_11 = (unsigned short)48041;
int zero = 0;
long long int var_13 = -1774040191658696218LL;
unsigned char var_14 = (unsigned char)160;
unsigned short var_15 = (unsigned short)15762;
short var_16 = (short)18496;
void init() {
}

void checksum() {
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

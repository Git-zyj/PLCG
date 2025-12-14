#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4653887630292488444LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-32751;
signed char var_6 = (signed char)21;
unsigned long long int var_7 = 13602489989637260451ULL;
short var_8 = (short)16164;
unsigned long long int var_9 = 13063062152834325387ULL;
unsigned short var_10 = (unsigned short)40244;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)238;
unsigned char var_15 = (unsigned char)141;
unsigned int var_16 = 323449369U;
unsigned short var_17 = (unsigned short)42045;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 219444757;
unsigned long long int var_21 = 13028000916675740839ULL;
unsigned char var_22 = (unsigned char)78;
int var_23 = -2021036659;
long long int var_24 = 6537425805810234270LL;
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

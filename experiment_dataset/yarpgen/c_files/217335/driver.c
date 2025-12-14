#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
long long int var_5 = -5931669281202373328LL;
short var_6 = (short)6860;
signed char var_7 = (signed char)93;
short var_8 = (short)-30443;
long long int var_9 = -2547750544864140609LL;
unsigned long long int var_13 = 15585747572634375238ULL;
unsigned short var_14 = (unsigned short)40873;
unsigned char var_15 = (unsigned char)204;
int zero = 0;
signed char var_16 = (signed char)-19;
unsigned long long int var_17 = 7254742966671942752ULL;
unsigned short var_18 = (unsigned short)27854;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6119477840591616411ULL;
unsigned long long int var_3 = 8966065309636499626ULL;
unsigned short var_7 = (unsigned short)39840;
short var_9 = (short)-24904;
short var_10 = (short)-12893;
short var_12 = (short)-30132;
short var_13 = (short)1598;
short var_14 = (short)-11637;
int zero = 0;
unsigned short var_15 = (unsigned short)8913;
unsigned short var_16 = (unsigned short)41335;
unsigned char var_17 = (unsigned char)164;
unsigned long long int var_18 = 4975079463607104135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

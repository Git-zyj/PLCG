#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
int var_1 = -801702106;
signed char var_2 = (signed char)-114;
unsigned short var_3 = (unsigned short)16512;
short var_4 = (short)-3421;
unsigned short var_5 = (unsigned short)17476;
unsigned long long int var_6 = 1622857886436105529ULL;
int var_8 = 156748064;
unsigned short var_9 = (unsigned short)5227;
int zero = 0;
unsigned short var_10 = (unsigned short)45224;
unsigned long long int var_11 = 5969254509222605668ULL;
signed char var_12 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

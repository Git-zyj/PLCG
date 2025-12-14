#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
signed char var_2 = (signed char)121;
short var_3 = (short)-16458;
long long int var_6 = 3661671712004749598LL;
unsigned long long int var_10 = 846037972812455489ULL;
short var_11 = (short)-29749;
unsigned char var_12 = (unsigned char)120;
short var_13 = (short)-13489;
signed char var_15 = (signed char)2;
int zero = 0;
unsigned long long int var_16 = 4114154527097328684ULL;
signed char var_17 = (signed char)58;
short var_18 = (short)5225;
long long int var_19 = 4414698085453294406LL;
long long int var_20 = -1819624731483420877LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

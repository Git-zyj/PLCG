#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8291252976131418284ULL;
signed char var_2 = (signed char)-78;
int var_4 = 1644291530;
long long int var_5 = 6604851842659019436LL;
short var_6 = (short)3263;
unsigned char var_7 = (unsigned char)74;
signed char var_8 = (signed char)90;
unsigned int var_10 = 1683608601U;
int var_11 = 1994900242;
unsigned short var_12 = (unsigned short)3916;
short var_13 = (short)23459;
int var_14 = -1951635685;
long long int var_15 = 7948944070201249600LL;
int zero = 0;
int var_16 = 543073735;
signed char var_17 = (signed char)78;
long long int var_18 = 5248108543326035508LL;
long long int var_19 = 2271904524114034735LL;
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

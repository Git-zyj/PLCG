#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned long long int var_2 = 9365289381242548183ULL;
unsigned long long int var_3 = 5282823088334166489ULL;
long long int var_5 = -6873738882256247271LL;
long long int var_6 = 2711881154949682956LL;
unsigned char var_7 = (unsigned char)64;
signed char var_8 = (signed char)92;
short var_9 = (short)-19024;
int zero = 0;
int var_10 = 1947436351;
unsigned char var_11 = (unsigned char)16;
unsigned short var_12 = (unsigned short)5936;
unsigned int var_13 = 1727441845U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

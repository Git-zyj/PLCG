#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1472;
int var_2 = 1690173667;
short var_5 = (short)-11666;
unsigned int var_6 = 3627187019U;
unsigned char var_7 = (unsigned char)5;
unsigned int var_8 = 618911828U;
unsigned int var_9 = 2412133104U;
long long int var_10 = 3977124641157595499LL;
signed char var_11 = (signed char)47;
int zero = 0;
short var_13 = (short)-2879;
unsigned int var_14 = 1682440764U;
int var_15 = -1271802048;
unsigned char var_16 = (unsigned char)154;
unsigned int var_17 = 4281447179U;
int var_18 = -483674255;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

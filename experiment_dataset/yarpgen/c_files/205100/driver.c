#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4191085445290795776ULL;
unsigned char var_3 = (unsigned char)146;
unsigned short var_5 = (unsigned short)46864;
unsigned int var_10 = 3156950868U;
short var_11 = (short)-10917;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
unsigned long long int var_16 = 5665726259809559702ULL;
unsigned int var_17 = 2057532514U;
unsigned long long int var_18 = 10015850547690870107ULL;
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

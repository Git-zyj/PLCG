#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8881;
unsigned char var_3 = (unsigned char)152;
int var_9 = 920469474;
unsigned char var_14 = (unsigned char)10;
int zero = 0;
unsigned long long int var_17 = 12278344783453994452ULL;
int var_18 = 420377945;
unsigned int var_19 = 3855476494U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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

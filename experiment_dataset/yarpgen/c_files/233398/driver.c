#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
unsigned int var_1 = 1023187938U;
long long int var_2 = -2292306965180908007LL;
unsigned char var_3 = (unsigned char)235;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7957398510007114597ULL;
unsigned short var_8 = (unsigned short)25334;
signed char var_9 = (signed char)-86;
short var_11 = (short)2253;
unsigned char var_12 = (unsigned char)194;
int zero = 0;
unsigned int var_14 = 3010880641U;
unsigned char var_15 = (unsigned char)53;
signed char var_16 = (signed char)88;
short var_17 = (short)4306;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

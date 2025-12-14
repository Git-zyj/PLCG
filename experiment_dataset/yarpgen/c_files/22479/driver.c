#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)110;
long long int var_3 = -2592291248544962811LL;
unsigned short var_4 = (unsigned short)20827;
long long int var_5 = 290491805526282261LL;
short var_7 = (short)16764;
unsigned long long int var_11 = 11647647437809668518ULL;
signed char var_12 = (signed char)-125;
int zero = 0;
unsigned char var_15 = (unsigned char)243;
unsigned char var_16 = (unsigned char)231;
long long int var_17 = -5953326789834433580LL;
void init() {
}

void checksum() {
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

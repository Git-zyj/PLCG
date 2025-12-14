#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12496951845720721352ULL;
unsigned char var_1 = (unsigned char)66;
short var_2 = (short)-2204;
int var_4 = 850182466;
unsigned int var_5 = 3843914911U;
unsigned short var_8 = (unsigned short)12970;
int var_9 = 1605428392;
int zero = 0;
unsigned int var_10 = 1690357510U;
unsigned long long int var_11 = 15682339212060117772ULL;
unsigned char var_12 = (unsigned char)211;
short var_13 = (short)-6189;
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

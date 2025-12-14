#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22605;
long long int var_1 = -4702717962639112784LL;
unsigned long long int var_2 = 6796276820384876362ULL;
long long int var_3 = -7293294560490090612LL;
unsigned int var_4 = 2034549128U;
unsigned long long int var_8 = 16299019001542356228ULL;
signed char var_10 = (signed char)-85;
unsigned long long int var_11 = 3675578839874167965ULL;
short var_12 = (short)4609;
long long int var_13 = 5990119793249719740LL;
signed char var_14 = (signed char)53;
int zero = 0;
short var_15 = (short)1588;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5054702911336859219ULL;
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

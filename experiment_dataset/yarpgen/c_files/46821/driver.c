#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11873634593080425941ULL;
long long int var_2 = -6387948771969272749LL;
unsigned char var_3 = (unsigned char)69;
unsigned int var_4 = 296388606U;
short var_10 = (short)-8518;
int var_11 = -1190652146;
unsigned long long int var_13 = 17232810519357000297ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1217948675946397403LL;
unsigned char var_18 = (unsigned char)72;
short var_19 = (short)8272;
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

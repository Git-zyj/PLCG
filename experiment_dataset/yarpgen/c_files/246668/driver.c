#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13963526436246169234ULL;
short var_2 = (short)29167;
unsigned long long int var_5 = 11978326730411774890ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)63;
unsigned int var_12 = 3643773556U;
int zero = 0;
unsigned short var_15 = (unsigned short)63405;
short var_16 = (short)-12861;
unsigned long long int var_17 = 14467015911674825816ULL;
int var_18 = 811036684;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17701;
unsigned long long int var_3 = 9067158296364502421ULL;
unsigned long long int var_4 = 4934268229643001206ULL;
unsigned long long int var_5 = 681656377740824399ULL;
unsigned long long int var_6 = 5645882755738412664ULL;
unsigned short var_11 = (unsigned short)6706;
unsigned long long int var_12 = 3585306602870483349ULL;
unsigned long long int var_13 = 13153793009092523251ULL;
unsigned long long int var_14 = 820266210983867321ULL;
unsigned short var_15 = (unsigned short)29963;
int zero = 0;
unsigned short var_16 = (unsigned short)57519;
unsigned short var_17 = (unsigned short)21792;
unsigned short var_18 = (unsigned short)49498;
void init() {
}

void checksum() {
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

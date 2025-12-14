#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
unsigned long long int var_4 = 15922396041764828770ULL;
unsigned char var_5 = (unsigned char)146;
long long int var_10 = -7577381577210109682LL;
unsigned long long int var_11 = 10404332847358654401ULL;
int zero = 0;
unsigned long long int var_19 = 4332348236079737143ULL;
short var_20 = (short)-14739;
void init() {
}

void checksum() {
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

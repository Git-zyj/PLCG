#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57936;
unsigned char var_10 = (unsigned char)224;
unsigned long long int var_12 = 9588045029253455594ULL;
int zero = 0;
unsigned long long int var_18 = 8884026766457926191ULL;
unsigned long long int var_19 = 11760076009244442858ULL;
void init() {
}

void checksum() {
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

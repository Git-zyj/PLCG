#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29301;
unsigned int var_6 = 3920950550U;
unsigned int var_9 = 1374090557U;
long long int var_11 = 3104191450452218508LL;
unsigned short var_12 = (unsigned short)16570;
int zero = 0;
long long int var_16 = 3685506091256627205LL;
signed char var_17 = (signed char)-8;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned char var_7 = (unsigned char)183;
unsigned short var_13 = (unsigned short)23274;
int var_14 = 1117745913;
unsigned char var_15 = (unsigned char)72;
int zero = 0;
int var_16 = -774103201;
unsigned long long int var_17 = 17724693553462279338ULL;
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

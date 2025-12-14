#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 744346838;
unsigned short var_9 = (unsigned short)3194;
unsigned long long int var_10 = 9118888604935594697ULL;
int var_13 = -541886084;
int zero = 0;
int var_15 = 243506939;
int var_16 = -1440534796;
unsigned char var_17 = (unsigned char)248;
unsigned char var_18 = (unsigned char)202;
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

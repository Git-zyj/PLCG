#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10765;
unsigned int var_4 = 1018639488U;
unsigned char var_8 = (unsigned char)231;
short var_9 = (short)-2068;
int zero = 0;
unsigned short var_11 = (unsigned short)26350;
long long int var_12 = -8660959878086889701LL;
unsigned int var_13 = 2421316987U;
short var_14 = (short)11215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

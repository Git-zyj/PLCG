#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
short var_2 = (short)-15972;
int var_3 = -1423630090;
long long int var_5 = 1218097729320234177LL;
unsigned short var_6 = (unsigned short)47798;
int var_7 = -1529410435;
long long int var_8 = -2997804216211637973LL;
signed char var_12 = (signed char)-30;
int zero = 0;
signed char var_13 = (signed char)44;
unsigned long long int var_14 = 7987469051135673292ULL;
unsigned char var_15 = (unsigned char)167;
short var_16 = (short)2510;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

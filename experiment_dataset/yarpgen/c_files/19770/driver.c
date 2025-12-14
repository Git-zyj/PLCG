#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
int var_5 = 1947620876;
unsigned int var_8 = 3780718991U;
int var_11 = -1327187690;
unsigned short var_12 = (unsigned short)15684;
int var_15 = -813199405;
unsigned short var_16 = (unsigned short)46460;
int zero = 0;
unsigned int var_17 = 225556081U;
unsigned int var_18 = 2538214051U;
unsigned int var_19 = 3511493470U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37560;
int var_7 = 945296324;
unsigned char var_8 = (unsigned char)191;
unsigned short var_10 = (unsigned short)44357;
unsigned short var_13 = (unsigned short)65174;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1700338104U;
void init() {
}

void checksum() {
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

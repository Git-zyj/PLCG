#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1124905211490139923ULL;
unsigned int var_1 = 967062211U;
unsigned short var_4 = (unsigned short)8493;
signed char var_5 = (signed char)-12;
short var_6 = (short)-18164;
int zero = 0;
short var_10 = (short)-17064;
unsigned long long int var_11 = 707365031645662596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

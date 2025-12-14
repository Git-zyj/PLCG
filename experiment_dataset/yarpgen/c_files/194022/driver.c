#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
long long int var_4 = 2934883310512019829LL;
unsigned char var_6 = (unsigned char)218;
short var_9 = (short)7192;
int zero = 0;
signed char var_11 = (signed char)122;
unsigned short var_12 = (unsigned short)5555;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

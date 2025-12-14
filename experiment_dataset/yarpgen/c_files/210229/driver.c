#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
signed char var_7 = (signed char)111;
short var_9 = (short)-7616;
unsigned int var_10 = 823242513U;
int zero = 0;
short var_11 = (short)17088;
short var_12 = (short)-26524;
long long int var_13 = -6747430601791773472LL;
short var_14 = (short)-21084;
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

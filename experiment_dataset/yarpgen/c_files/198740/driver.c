#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46301;
unsigned short var_1 = (unsigned short)44306;
unsigned short var_7 = (unsigned short)26526;
int var_9 = -37023938;
unsigned int var_11 = 93671056U;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
signed char var_13 = (signed char)-100;
unsigned char var_14 = (unsigned char)230;
void init() {
}

void checksum() {
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

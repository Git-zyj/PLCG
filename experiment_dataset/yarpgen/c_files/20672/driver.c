#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8639;
unsigned char var_1 = (unsigned char)114;
short var_2 = (short)-2957;
signed char var_3 = (signed char)-83;
unsigned int var_5 = 290215101U;
unsigned long long int var_6 = 5166076051538355996ULL;
unsigned int var_16 = 3340036850U;
int zero = 0;
unsigned int var_17 = 2329573223U;
unsigned long long int var_18 = 1009750369483688616ULL;
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

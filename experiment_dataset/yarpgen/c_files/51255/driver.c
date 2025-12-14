#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28718;
short var_3 = (short)8088;
short var_4 = (short)-3104;
short var_7 = (short)9744;
signed char var_8 = (signed char)-105;
unsigned char var_10 = (unsigned char)219;
signed char var_11 = (signed char)109;
int zero = 0;
short var_12 = (short)9684;
short var_13 = (short)31153;
short var_14 = (short)-3493;
unsigned char var_15 = (unsigned char)107;
signed char var_16 = (signed char)15;
short var_17 = (short)-4596;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

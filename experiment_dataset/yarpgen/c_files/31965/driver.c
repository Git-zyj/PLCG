#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
signed char var_1 = (signed char)46;
short var_2 = (short)-19798;
signed char var_4 = (signed char)52;
signed char var_8 = (signed char)77;
unsigned short var_9 = (unsigned short)2752;
short var_10 = (short)9332;
signed char var_11 = (signed char)-30;
signed char var_12 = (signed char)-25;
short var_13 = (short)23728;
signed char var_15 = (signed char)7;
int zero = 0;
short var_16 = (short)-30813;
signed char var_17 = (signed char)-32;
signed char var_18 = (signed char)66;
signed char var_19 = (signed char)-46;
short var_20 = (short)-16282;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

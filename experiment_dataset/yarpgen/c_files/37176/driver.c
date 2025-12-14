#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_1 = (signed char)113;
short var_2 = (short)-6372;
short var_3 = (short)-24260;
signed char var_4 = (signed char)64;
signed char var_5 = (signed char)120;
signed char var_6 = (signed char)60;
signed char var_7 = (signed char)1;
signed char var_8 = (signed char)-13;
signed char var_9 = (signed char)109;
int zero = 0;
short var_10 = (short)12095;
signed char var_11 = (signed char)-53;
signed char var_12 = (signed char)-58;
signed char var_13 = (signed char)65;
signed char var_14 = (signed char)-104;
short var_15 = (short)-6224;
signed char var_16 = (signed char)88;
short var_17 = (short)1364;
signed char var_18 = (signed char)-60;
short var_19 = (short)-19282;
short var_20 = (short)18986;
short var_21 = (short)23397;
signed char var_22 = (signed char)-18;
signed char var_23 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

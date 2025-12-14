#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2411859683U;
int var_1 = -913404959;
signed char var_2 = (signed char)-15;
int var_4 = -1215145951;
short var_10 = (short)29436;
short var_11 = (short)13712;
long long int var_12 = 5563751552661485133LL;
signed char var_13 = (signed char)-7;
unsigned int var_16 = 980579074U;
int var_17 = -418231681;
int zero = 0;
signed char var_18 = (signed char)119;
int var_19 = 275549619;
signed char var_20 = (signed char)-100;
void init() {
}

void checksum() {
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

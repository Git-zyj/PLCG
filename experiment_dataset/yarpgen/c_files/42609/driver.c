#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2824300245U;
signed char var_3 = (signed char)102;
unsigned long long int var_4 = 13635141446829554134ULL;
int var_8 = -289934742;
long long int var_10 = 5343542193983013675LL;
short var_12 = (short)-25435;
unsigned int var_14 = 2961357270U;
signed char var_15 = (signed char)120;
int zero = 0;
long long int var_17 = -3293047727931131717LL;
long long int var_18 = -4639265276549602257LL;
long long int var_19 = -2266824254558058317LL;
signed char var_20 = (signed char)-121;
unsigned char var_21 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

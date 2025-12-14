#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 514954440042067207ULL;
signed char var_2 = (signed char)-12;
unsigned long long int var_5 = 12900342400195192744ULL;
signed char var_7 = (signed char)30;
signed char var_8 = (signed char)-90;
signed char var_12 = (signed char)-76;
int zero = 0;
signed char var_15 = (signed char)105;
unsigned long long int var_16 = 13098229272951404564ULL;
signed char var_17 = (signed char)96;
unsigned long long int var_18 = 8953880189051309727ULL;
unsigned long long int var_19 = 9049530483876098369ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

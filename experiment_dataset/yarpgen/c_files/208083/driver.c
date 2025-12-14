#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4149097464U;
unsigned int var_1 = 639459201U;
int var_2 = -2090819830;
unsigned short var_4 = (unsigned short)27776;
unsigned int var_6 = 4088758481U;
int var_7 = -2114892914;
int var_8 = -200991251;
unsigned char var_9 = (unsigned char)121;
unsigned char var_10 = (unsigned char)187;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
unsigned int var_13 = 1082678994U;
signed char var_14 = (signed char)41;
int var_15 = 1212145492;
unsigned char var_16 = (unsigned char)110;
int var_17 = -266636957;
void init() {
}

void checksum() {
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

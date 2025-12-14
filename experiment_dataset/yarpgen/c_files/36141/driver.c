#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5651146422612939902ULL;
unsigned int var_1 = 557354488U;
int var_5 = -463095660;
unsigned short var_8 = (unsigned short)34241;
short var_9 = (short)-29814;
unsigned char var_11 = (unsigned char)140;
int var_12 = -1957093392;
short var_15 = (short)9886;
int zero = 0;
unsigned char var_17 = (unsigned char)221;
unsigned long long int var_18 = 13233432570568289305ULL;
unsigned long long int var_19 = 5251800755177517424ULL;
void init() {
}

void checksum() {
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

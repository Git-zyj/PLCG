#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22784;
int var_1 = -341603325;
unsigned int var_10 = 1039566104U;
signed char var_12 = (signed char)105;
int var_13 = 795166321;
int zero = 0;
unsigned char var_16 = (unsigned char)81;
unsigned long long int var_17 = 4145521297094825501ULL;
unsigned char var_18 = (unsigned char)221;
unsigned long long int var_19 = 4764096761526252907ULL;
void init() {
}

void checksum() {
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

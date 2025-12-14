#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3987136304045534543LL;
unsigned long long int var_2 = 15967967332350202512ULL;
unsigned char var_3 = (unsigned char)153;
unsigned int var_4 = 1392047026U;
unsigned long long int var_5 = 14815155300345238259ULL;
short var_6 = (short)-17251;
long long int var_8 = -5278456244787799615LL;
long long int var_10 = -7338371393524920001LL;
int zero = 0;
unsigned char var_11 = (unsigned char)11;
unsigned long long int var_12 = 12550083246897846403ULL;
int var_13 = -967600945;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

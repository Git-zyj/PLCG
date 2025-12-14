#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
unsigned short var_5 = (unsigned short)52370;
unsigned long long int var_7 = 8308092271149138503ULL;
long long int var_10 = -3844176270514282443LL;
unsigned long long int var_12 = 17815128818595300106ULL;
short var_13 = (short)15677;
int zero = 0;
short var_20 = (short)-7192;
long long int var_21 = 9157414952352500044LL;
unsigned char var_22 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

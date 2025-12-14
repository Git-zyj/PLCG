#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28849;
signed char var_1 = (signed char)-54;
unsigned long long int var_2 = 14130432828310837827ULL;
unsigned short var_3 = (unsigned short)57449;
unsigned long long int var_4 = 17153671978154084198ULL;
unsigned char var_5 = (unsigned char)26;
signed char var_6 = (signed char)56;
signed char var_7 = (signed char)20;
int var_8 = 1271479985;
unsigned char var_10 = (unsigned char)95;
long long int var_12 = -1710100036742568489LL;
int var_13 = 1683531677;
unsigned long long int var_14 = 10494952688157788372ULL;
int zero = 0;
long long int var_15 = 2858258048923021970LL;
signed char var_16 = (signed char)-14;
unsigned short var_17 = (unsigned short)779;
void init() {
}

void checksum() {
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

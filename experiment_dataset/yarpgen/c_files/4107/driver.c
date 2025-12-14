#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13725950285262404347ULL;
unsigned char var_1 = (unsigned char)101;
unsigned long long int var_2 = 4733652734073780410ULL;
unsigned short var_4 = (unsigned short)19376;
unsigned long long int var_6 = 11679455718886691767ULL;
unsigned long long int var_8 = 623530312297812081ULL;
unsigned short var_10 = (unsigned short)54145;
int var_11 = -2047705677;
unsigned long long int var_12 = 7030976952511261849ULL;
unsigned long long int var_13 = 14019120055642150244ULL;
unsigned short var_14 = (unsigned short)25393;
unsigned short var_16 = (unsigned short)47737;
int zero = 0;
unsigned long long int var_17 = 8595748858093025387ULL;
unsigned short var_18 = (unsigned short)52334;
unsigned short var_19 = (unsigned short)32329;
short var_20 = (short)11702;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

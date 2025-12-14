#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
short var_2 = (short)32479;
unsigned long long int var_3 = 11206374237269333847ULL;
unsigned long long int var_4 = 6487364334485785035ULL;
unsigned char var_5 = (unsigned char)242;
unsigned char var_6 = (unsigned char)90;
short var_8 = (short)-27293;
unsigned long long int var_9 = 15016613522718540510ULL;
unsigned char var_10 = (unsigned char)135;
unsigned long long int var_11 = 14439275601014310544ULL;
unsigned long long int var_17 = 6182077808672251411ULL;
int zero = 0;
long long int var_18 = -6259343388280727887LL;
int var_19 = 291586144;
unsigned short var_20 = (unsigned short)41258;
signed char var_21 = (signed char)-93;
signed char var_22 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

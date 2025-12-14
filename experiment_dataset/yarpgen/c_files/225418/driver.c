#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31682;
int var_5 = 2098655123;
int var_6 = -61054521;
long long int var_7 = -5584205873543181016LL;
short var_8 = (short)-2184;
unsigned long long int var_9 = 16209725104809934976ULL;
unsigned short var_10 = (unsigned short)27222;
unsigned long long int var_11 = 16344038055495748667ULL;
unsigned int var_12 = 1741302530U;
unsigned long long int var_14 = 13962872072694147429ULL;
unsigned int var_18 = 985537883U;
int zero = 0;
long long int var_19 = 8766520896741312792LL;
unsigned char var_20 = (unsigned char)175;
int var_21 = 597792704;
void init() {
}

void checksum() {
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

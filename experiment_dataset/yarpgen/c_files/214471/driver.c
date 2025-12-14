#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9490;
unsigned short var_1 = (unsigned short)37464;
int var_2 = 215539719;
long long int var_3 = -879760149113663213LL;
signed char var_4 = (signed char)-86;
int var_5 = 1864035043;
unsigned long long int var_6 = 10984496187823479268ULL;
unsigned int var_7 = 4242469148U;
int var_9 = -943307737;
unsigned short var_10 = (unsigned short)41021;
int zero = 0;
long long int var_12 = 1162684298215043471LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)11;
int var_15 = 228973512;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

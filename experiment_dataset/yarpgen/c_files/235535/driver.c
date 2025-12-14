#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
signed char var_2 = (signed char)0;
unsigned short var_3 = (unsigned short)18763;
unsigned char var_5 = (unsigned char)193;
signed char var_9 = (signed char)110;
unsigned short var_11 = (unsigned short)54197;
unsigned short var_13 = (unsigned short)1965;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
unsigned short var_15 = (unsigned short)17511;
signed char var_16 = (signed char)71;
unsigned char var_17 = (unsigned char)224;
signed char var_18 = (signed char)-90;
unsigned short var_19 = (unsigned short)57454;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

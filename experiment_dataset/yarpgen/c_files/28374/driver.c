#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
signed char var_5 = (signed char)-111;
int var_7 = 1215216917;
unsigned char var_8 = (unsigned char)4;
unsigned char var_10 = (unsigned char)226;
signed char var_11 = (signed char)-86;
signed char var_14 = (signed char)40;
unsigned char var_16 = (unsigned char)3;
int zero = 0;
unsigned char var_18 = (unsigned char)215;
unsigned char var_19 = (unsigned char)131;
signed char var_20 = (signed char)-43;
int var_21 = 942745922;
int var_22 = 1989360620;
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

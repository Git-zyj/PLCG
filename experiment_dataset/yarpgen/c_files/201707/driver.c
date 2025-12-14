#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1470697852371483647ULL;
long long int var_2 = -1888972207520184296LL;
unsigned long long int var_4 = 16327640608265888319ULL;
int var_6 = 2126548365;
signed char var_7 = (signed char)4;
unsigned short var_8 = (unsigned short)8197;
int var_9 = -1322875543;
unsigned long long int var_10 = 71964002299952114ULL;
signed char var_12 = (signed char)-91;
unsigned long long int var_15 = 7906936277036683152ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)46796;
signed char var_19 = (signed char)-95;
unsigned int var_20 = 2472640398U;
void init() {
}

void checksum() {
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

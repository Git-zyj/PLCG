#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13212497893833084682ULL;
signed char var_2 = (signed char)-77;
unsigned short var_5 = (unsigned short)42611;
unsigned long long int var_7 = 17679293057560397327ULL;
int var_9 = 1679262883;
int var_11 = 552437579;
unsigned long long int var_13 = 533482718364796203ULL;
unsigned char var_14 = (unsigned char)190;
unsigned int var_15 = 2154793792U;
signed char var_17 = (signed char)-65;
int zero = 0;
unsigned long long int var_19 = 11216992470236004333ULL;
unsigned long long int var_20 = 14752750040903159555ULL;
unsigned char var_21 = (unsigned char)102;
signed char var_22 = (signed char)16;
void init() {
}

void checksum() {
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

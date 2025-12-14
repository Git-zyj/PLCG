#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2917148404144512735LL;
long long int var_1 = 2145021137751814066LL;
long long int var_2 = -1771245417241552249LL;
unsigned char var_3 = (unsigned char)192;
short var_5 = (short)-23186;
unsigned char var_6 = (unsigned char)195;
unsigned char var_7 = (unsigned char)251;
unsigned char var_11 = (unsigned char)80;
short var_12 = (short)26106;
short var_13 = (short)8584;
int zero = 0;
unsigned long long int var_14 = 16348139449648625892ULL;
signed char var_15 = (signed char)84;
signed char var_16 = (signed char)-87;
unsigned char var_17 = (unsigned char)9;
unsigned char var_18 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

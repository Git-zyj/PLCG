#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3582366476U;
unsigned long long int var_7 = 5273634852002160565ULL;
signed char var_8 = (signed char)76;
unsigned long long int var_10 = 4284591204477710318ULL;
unsigned short var_14 = (unsigned short)5679;
unsigned long long int var_15 = 6687661435900079361ULL;
signed char var_17 = (signed char)-20;
long long int var_18 = 6880340108853138672LL;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
unsigned short var_20 = (unsigned short)2653;
unsigned long long int var_21 = 18018213819598194718ULL;
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

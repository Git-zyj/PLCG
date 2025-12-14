#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4450;
unsigned short var_5 = (unsigned short)31499;
unsigned short var_7 = (unsigned short)19817;
unsigned short var_8 = (unsigned short)28300;
unsigned long long int var_12 = 16260994628588190005ULL;
unsigned short var_17 = (unsigned short)12722;
int zero = 0;
unsigned short var_20 = (unsigned short)60176;
unsigned long long int var_21 = 17662284343343421452ULL;
unsigned short var_22 = (unsigned short)49268;
unsigned long long int var_23 = 4275423582364873556ULL;
unsigned long long int var_24 = 160710974563127245ULL;
unsigned short var_25 = (unsigned short)4430;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)49;
unsigned char var_4 = (unsigned char)89;
unsigned char var_6 = (unsigned char)152;
int var_9 = 673791571;
unsigned char var_10 = (unsigned char)31;
unsigned long long int var_13 = 15901037819641093156ULL;
unsigned int var_14 = 3998669473U;
short var_15 = (short)1844;
int zero = 0;
unsigned short var_19 = (unsigned short)43454;
unsigned int var_20 = 3837571351U;
unsigned short var_21 = (unsigned short)11526;
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

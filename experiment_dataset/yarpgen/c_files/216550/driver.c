#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2663483975032234835ULL;
long long int var_2 = 455627177966214967LL;
long long int var_3 = -768989892191700386LL;
long long int var_5 = -6494147992096373539LL;
long long int var_7 = -4195944871684229230LL;
unsigned char var_8 = (unsigned char)131;
int zero = 0;
unsigned short var_11 = (unsigned short)33094;
unsigned long long int var_12 = 5628818199102645045ULL;
long long int var_13 = -3707063996984143215LL;
long long int var_14 = -6328185285277951080LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

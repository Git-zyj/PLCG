#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned short var_1 = (unsigned short)38934;
signed char var_2 = (signed char)-119;
long long int var_3 = -3979077929309426643LL;
unsigned char var_4 = (unsigned char)54;
unsigned int var_5 = 3066318735U;
signed char var_8 = (signed char)-3;
unsigned long long int var_10 = 5954673359961673349ULL;
long long int var_12 = 756614111293218680LL;
int zero = 0;
unsigned int var_17 = 2666024526U;
long long int var_18 = 7837651724060075234LL;
long long int var_19 = 9064400907078723293LL;
unsigned int var_20 = 896891567U;
unsigned long long int var_21 = 5897739598214023251ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

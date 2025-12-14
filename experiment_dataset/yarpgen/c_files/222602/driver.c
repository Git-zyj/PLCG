#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3951772098936928841ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 683337625U;
unsigned long long int var_3 = 3012051254818999163ULL;
signed char var_5 = (signed char)95;
unsigned char var_6 = (unsigned char)33;
_Bool var_7 = (_Bool)1;
int var_9 = -2021760131;
int zero = 0;
signed char var_10 = (signed char)-112;
unsigned short var_11 = (unsigned short)13961;
signed char var_12 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

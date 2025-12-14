#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4768877192287014279LL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)36499;
unsigned int var_4 = 489376289U;
unsigned char var_5 = (unsigned char)120;
unsigned int var_6 = 1511512642U;
signed char var_7 = (signed char)-23;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)20;
int zero = 0;
unsigned int var_11 = 938178665U;
unsigned short var_12 = (unsigned short)21798;
signed char var_13 = (signed char)24;
int var_14 = 1050089436;
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

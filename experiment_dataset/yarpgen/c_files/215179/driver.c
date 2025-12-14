#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14858;
long long int var_1 = 8463988449096760132LL;
unsigned long long int var_2 = 2999504845347742010ULL;
signed char var_3 = (signed char)97;
signed char var_4 = (signed char)-119;
signed char var_5 = (signed char)-118;
unsigned short var_11 = (unsigned short)52231;
int zero = 0;
short var_19 = (short)-28959;
int var_20 = -90273691;
void init() {
}

void checksum() {
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

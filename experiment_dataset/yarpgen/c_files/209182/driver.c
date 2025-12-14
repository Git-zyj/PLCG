#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-81;
unsigned long long int var_3 = 17173376802732510379ULL;
int var_5 = 718885547;
unsigned long long int var_7 = 17971453451995841063ULL;
unsigned long long int var_9 = 16310860342477099967ULL;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-9342;
int zero = 0;
unsigned short var_19 = (unsigned short)3329;
int var_20 = -457662255;
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

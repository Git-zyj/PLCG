#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14826626836007179361ULL;
unsigned short var_3 = (unsigned short)57046;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)65524;
unsigned int var_7 = 1634312239U;
unsigned short var_9 = (unsigned short)61933;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)39945;
int var_14 = 1672469868;
void init() {
}

void checksum() {
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

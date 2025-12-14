#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)10518;
signed char var_5 = (signed char)-126;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)116;
long long int var_11 = 5206302555663393657LL;
int var_12 = -2013457851;
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

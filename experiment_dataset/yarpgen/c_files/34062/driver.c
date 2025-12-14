#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32653;
int var_4 = 2035663732;
long long int var_6 = 2522446245039796697LL;
unsigned int var_7 = 2616858186U;
unsigned long long int var_13 = 10408824420413856967ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-21657;
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

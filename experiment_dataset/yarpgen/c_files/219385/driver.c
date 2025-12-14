#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1469842440519646894LL;
long long int var_5 = 4156703554598427248LL;
unsigned short var_8 = (unsigned short)3335;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-56;
unsigned char var_12 = (unsigned char)192;
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

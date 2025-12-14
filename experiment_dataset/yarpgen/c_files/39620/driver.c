#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)32278;
short var_10 = (short)-27414;
long long int var_11 = -196266729035258920LL;
short var_12 = (short)-11012;
unsigned long long int var_13 = 2376918797596933766ULL;
int zero = 0;
short var_14 = (short)-9742;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

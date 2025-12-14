#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned short var_3 = (unsigned short)24367;
int var_4 = 518300074;
long long int var_6 = 5554449884658590184LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = -7479227316774797890LL;
int zero = 0;
long long int var_12 = -8008535205990941397LL;
int var_13 = -1077398694;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

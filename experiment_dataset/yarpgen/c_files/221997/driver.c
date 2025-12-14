#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned long long int var_3 = 16570537326984875647ULL;
unsigned char var_5 = (unsigned char)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 1772745344986539614ULL;
short var_11 = (short)3481;
long long int var_12 = -7664142976807902342LL;
unsigned int var_13 = 841902155U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

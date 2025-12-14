#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39401;
_Bool var_3 = (_Bool)1;
long long int var_4 = -1061263111996446797LL;
int var_7 = -2129171855;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -3947190364049214619LL;
long long int var_13 = -4556077435527105701LL;
void init() {
}

void checksum() {
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

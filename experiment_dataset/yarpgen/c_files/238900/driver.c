#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1890;
unsigned char var_1 = (unsigned char)177;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3791476038U;
long long int var_5 = 5077418750338961470LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = -863755785;
int var_11 = 391121679;
unsigned char var_12 = (unsigned char)155;
long long int var_13 = 5318200909329805563LL;
unsigned int var_14 = 1641148259U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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

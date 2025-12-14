#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned int var_5 = 812722025U;
unsigned short var_6 = (unsigned short)40771;
unsigned int var_8 = 2599575885U;
_Bool var_9 = (_Bool)0;
long long int var_11 = -6973709570691146048LL;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
signed char var_14 = (signed char)-54;
int var_15 = 1748801451;
unsigned int var_16 = 2642037696U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

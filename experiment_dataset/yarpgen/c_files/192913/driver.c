#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 168287788806718791ULL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)31;
int var_8 = -1985813160;
unsigned long long int var_10 = 6911558309977138236ULL;
signed char var_11 = (signed char)-12;
int zero = 0;
signed char var_12 = (signed char)-29;
unsigned char var_13 = (unsigned char)111;
long long int var_14 = -2696124849661213678LL;
void init() {
}

void checksum() {
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

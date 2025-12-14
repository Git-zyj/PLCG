#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6582133220141171548LL;
int var_3 = 467765139;
signed char var_5 = (signed char)55;
unsigned long long int var_6 = 2506822808398843534ULL;
unsigned long long int var_7 = 3158093879810555292ULL;
unsigned char var_8 = (unsigned char)161;
int zero = 0;
long long int var_11 = 4552122485928873389LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
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

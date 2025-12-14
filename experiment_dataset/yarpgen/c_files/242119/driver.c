#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2123;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_7 = -1698257239612849022LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 822898894;
long long int var_12 = -8652600296571578577LL;
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

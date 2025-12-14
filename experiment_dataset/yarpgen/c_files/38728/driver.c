#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43982;
unsigned short var_2 = (unsigned short)58310;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_10 = 418936450436376435LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 15275009399709776472ULL;
void init() {
}

void checksum() {
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

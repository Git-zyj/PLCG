#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1165502647206131860ULL;
long long int var_5 = -6690435407280055746LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1562089616U;
long long int var_8 = -1472925079594256999LL;
int zero = 0;
signed char var_11 = (signed char)-4;
signed char var_12 = (signed char)-107;
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

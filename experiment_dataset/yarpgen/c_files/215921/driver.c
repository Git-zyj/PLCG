#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 283856964252145059LL;
int var_2 = 391806118;
signed char var_5 = (signed char)-29;
long long int var_6 = -5693715049561533276LL;
unsigned long long int var_8 = 1397944815984850883ULL;
_Bool var_9 = (_Bool)1;
int var_11 = 957186820;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)21;
void init() {
}

void checksum() {
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

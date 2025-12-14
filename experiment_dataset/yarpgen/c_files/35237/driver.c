#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1612589598992039719LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 3673039739880010532ULL;
unsigned long long int var_5 = 452767879112430380ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1129416773;
signed char var_9 = (signed char)-62;
int zero = 0;
short var_11 = (short)-10316;
long long int var_12 = -270151966398100963LL;
int var_13 = 2066474529;
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

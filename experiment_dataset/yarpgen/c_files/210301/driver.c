#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_4 = 206470002U;
unsigned long long int var_5 = 2211873976258866967ULL;
int var_7 = -1450289496;
int var_8 = 1204649917;
int zero = 0;
short var_12 = (short)18181;
signed char var_13 = (signed char)-84;
void init() {
}

void checksum() {
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

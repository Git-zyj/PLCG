#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5388164658250215564ULL;
long long int var_3 = 4484390692663736809LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 885813213U;
short var_20 = (short)-20277;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

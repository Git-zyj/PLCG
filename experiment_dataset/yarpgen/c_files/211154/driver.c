#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)-20520;
unsigned char var_5 = (unsigned char)161;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 18363186292378328316ULL;
unsigned long long int var_15 = 1036168730397036478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1210356183;
long long int var_4 = -7632298295110524962LL;
unsigned short var_8 = (unsigned short)31130;
unsigned short var_10 = (unsigned short)42632;
long long int var_15 = -7622517598674488386LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)116;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

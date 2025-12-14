#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-85;
long long int var_6 = -4037758178015025962LL;
long long int var_7 = -2821158492882045571LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)27;
signed char var_14 = (signed char)-50;
unsigned short var_16 = (unsigned short)63608;
int zero = 0;
long long int var_17 = -4207862792295276961LL;
signed char var_18 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

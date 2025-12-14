#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -1264233616347182774LL;
long long int var_5 = 2396376435885651952LL;
int var_6 = 1650331596;
unsigned short var_10 = (unsigned short)32770;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)94;
int var_14 = 1797597741;
signed char var_15 = (signed char)87;
unsigned long long int var_16 = 15046872553577612568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

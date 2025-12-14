#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4281634026993244857ULL;
long long int var_3 = -3932215276295142412LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)31664;
signed char var_8 = (signed char)91;
unsigned long long int var_9 = 15347451146666690759ULL;
int zero = 0;
unsigned long long int var_10 = 15888665037236344725ULL;
long long int var_11 = 7014643817074533668LL;
unsigned long long int var_12 = 12275794867583060955ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41035;
int var_1 = 336052480;
int var_4 = 516442505;
int var_8 = 1050587911;
signed char var_9 = (signed char)72;
long long int var_10 = -8086749127676159928LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 499608664;
int var_16 = 375701784;
int var_17 = 1356192929;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

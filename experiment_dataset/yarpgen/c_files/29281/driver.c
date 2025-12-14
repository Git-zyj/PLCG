#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)179;
long long int var_4 = 8150912211152758089LL;
unsigned char var_5 = (unsigned char)249;
unsigned char var_7 = (unsigned char)197;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2079837013876085108LL;
unsigned char var_12 = (unsigned char)162;
int zero = 0;
unsigned char var_13 = (unsigned char)51;
long long int var_14 = -2176724002839829631LL;
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

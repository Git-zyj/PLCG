#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -47712302572931447LL;
short var_2 = (short)-19740;
unsigned long long int var_3 = 6520232924002210869ULL;
long long int var_5 = 4419070889817545047LL;
unsigned short var_6 = (unsigned short)14162;
long long int var_7 = 5446420308187690634LL;
int zero = 0;
long long int var_10 = -5494462644674529273LL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

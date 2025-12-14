#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4287441563489427877LL;
short var_2 = (short)-18735;
signed char var_5 = (signed char)52;
signed char var_8 = (signed char)-43;
signed char var_9 = (signed char)90;
long long int var_10 = 2838666968434631468LL;
int zero = 0;
long long int var_11 = 1295286749382087001LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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

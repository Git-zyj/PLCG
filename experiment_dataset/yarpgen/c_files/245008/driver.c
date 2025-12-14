#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2820345485U;
long long int var_2 = -6544326428327850573LL;
int var_6 = 479878142;
unsigned short var_8 = (unsigned short)26373;
unsigned long long int var_10 = 6905491423893435235ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 453641211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

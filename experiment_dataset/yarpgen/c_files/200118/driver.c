#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4086970070U;
long long int var_4 = 7086716927297667548LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3783385309U;
long long int var_13 = -8915343943425508234LL;
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

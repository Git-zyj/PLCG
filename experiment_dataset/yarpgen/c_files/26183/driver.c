#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3070215874U;
long long int var_8 = 8083510231842045189LL;
unsigned short var_12 = (unsigned short)20121;
int zero = 0;
long long int var_18 = 2810002987654357434LL;
int var_19 = -503504288;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-30795;
unsigned long long int var_22 = 1908799704655552121ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

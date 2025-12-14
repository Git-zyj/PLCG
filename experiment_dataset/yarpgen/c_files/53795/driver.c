#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1320998494;
short var_3 = (short)-28167;
signed char var_4 = (signed char)20;
unsigned int var_6 = 2474862386U;
short var_14 = (short)15011;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3633567761631133226LL;
unsigned short var_19 = (unsigned short)48431;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

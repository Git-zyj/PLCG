#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned short var_2 = (unsigned short)5836;
_Bool var_3 = (_Bool)0;
long long int var_15 = 1358261329536432309LL;
int zero = 0;
unsigned long long int var_17 = 15266124630002728413ULL;
short var_18 = (short)-14685;
unsigned long long int var_19 = 10734940734327835142ULL;
signed char var_20 = (signed char)29;
short var_21 = (short)-10541;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

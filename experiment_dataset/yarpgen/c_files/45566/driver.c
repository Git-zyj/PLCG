#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6032007432435382716LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -1912800894046177412LL;
signed char var_6 = (signed char)-58;
short var_7 = (short)5583;
short var_8 = (short)-30534;
short var_9 = (short)-16499;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1106963362;
int var_12 = 1989098063;
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

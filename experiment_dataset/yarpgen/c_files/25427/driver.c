#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12351;
unsigned int var_4 = 2022636386U;
short var_6 = (short)21269;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)67;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_13 = -744376764;
int zero = 0;
unsigned int var_14 = 629642831U;
long long int var_15 = -5484550899883581465LL;
long long int var_16 = -2918554286553674504LL;
unsigned int var_17 = 2233950362U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14010488356958391565ULL;
unsigned int var_3 = 1355512450U;
short var_4 = (short)-29666;
long long int var_7 = -6500813868547737580LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 14867516870326580944ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)50500;
signed char var_15 = (signed char)-49;
short var_16 = (short)-3965;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

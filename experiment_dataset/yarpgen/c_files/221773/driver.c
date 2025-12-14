#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3763783159649342910LL;
long long int var_6 = -3796321656746287351LL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-111;
unsigned long long int var_14 = 4759598081619195226ULL;
int zero = 0;
short var_15 = (short)14487;
long long int var_16 = -1319002549833734632LL;
void init() {
}

void checksum() {
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

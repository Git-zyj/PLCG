#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -657098921;
signed char var_7 = (signed char)5;
signed char var_9 = (signed char)86;
unsigned long long int var_16 = 6101102559948941538ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)41137;
short var_18 = (short)10882;
signed char var_19 = (signed char)126;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11148497559161929892ULL;
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

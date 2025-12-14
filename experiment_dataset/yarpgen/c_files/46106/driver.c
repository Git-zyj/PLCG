#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21425;
unsigned long long int var_4 = 17135243107506433479ULL;
unsigned short var_5 = (unsigned short)38605;
signed char var_13 = (signed char)47;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17582645801464279104ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16455549060345992786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

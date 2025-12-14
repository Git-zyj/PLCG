#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 331665595U;
_Bool var_1 = (_Bool)0;
short var_6 = (short)-28056;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 10940398463005083625ULL;
short var_15 = (short)20477;
short var_17 = (short)-1398;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1176973902412972212ULL;
unsigned int var_22 = 1041343243U;
void init() {
}

void checksum() {
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

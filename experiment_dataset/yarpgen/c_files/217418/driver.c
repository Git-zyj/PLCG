#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 488552584;
signed char var_5 = (signed char)122;
int var_6 = 1634029304;
unsigned long long int var_9 = 11898779025675737199ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1900070009U;
unsigned short var_15 = (unsigned short)62119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

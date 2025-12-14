#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56766;
short var_3 = (short)21981;
long long int var_6 = 1574798953394216759LL;
signed char var_8 = (signed char)98;
short var_10 = (short)-8599;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2693355166598968100LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

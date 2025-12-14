#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
unsigned char var_3 = (unsigned char)41;
unsigned long long int var_4 = 18061115436780635205ULL;
short var_5 = (short)-4912;
unsigned int var_7 = 1823682973U;
long long int var_8 = 3251816970990097643LL;
unsigned long long int var_9 = 4140206877808990635ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)39721;
unsigned long long int var_12 = 15140383095859085584ULL;
long long int var_13 = 3027477475667726370LL;
unsigned long long int var_14 = 13475546785572253043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

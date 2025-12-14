#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4488984143862659046LL;
long long int var_3 = -334179161996651273LL;
short var_6 = (short)19732;
unsigned int var_7 = 2482560153U;
long long int var_8 = -3802862072214111519LL;
short var_9 = (short)32718;
short var_10 = (short)25415;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3250157640U;
signed char var_14 = (signed char)-35;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3154795507U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10338;
int var_2 = -863204239;
long long int var_5 = -5089581469353232834LL;
_Bool var_6 = (_Bool)0;
long long int var_9 = -8110863387695918592LL;
int zero = 0;
unsigned int var_11 = 4028454451U;
signed char var_12 = (signed char)67;
signed char var_13 = (signed char)-70;
long long int var_14 = -6743265285070224794LL;
unsigned int var_15 = 3548248064U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

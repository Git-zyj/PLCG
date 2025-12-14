#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-58;
int var_5 = -135988086;
long long int var_9 = 7299491080938443240LL;
_Bool var_11 = (_Bool)1;
int var_13 = 78197833;
long long int var_14 = -765563525460475737LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = -1077453733;
short var_19 = (short)14414;
short var_20 = (short)5791;
signed char var_21 = (signed char)-61;
void init() {
}

void checksum() {
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

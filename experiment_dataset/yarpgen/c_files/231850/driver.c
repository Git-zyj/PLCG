#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3641059145U;
signed char var_4 = (signed char)-94;
int var_5 = -157273342;
long long int var_7 = 6375091847555866875LL;
long long int var_8 = 4635707068808466197LL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)91;
int zero = 0;
unsigned long long int var_13 = 4639516065491835696ULL;
signed char var_14 = (signed char)5;
unsigned int var_15 = 1005501178U;
_Bool var_16 = (_Bool)0;
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

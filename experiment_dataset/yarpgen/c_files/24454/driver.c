#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
_Bool var_1 = (_Bool)0;
long long int var_2 = 459921732448316732LL;
unsigned short var_3 = (unsigned short)14887;
long long int var_5 = 5855153822222158424LL;
unsigned int var_7 = 3919392163U;
short var_8 = (short)-29089;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)19133;
unsigned short var_14 = (unsigned short)38885;
signed char var_15 = (signed char)-75;
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

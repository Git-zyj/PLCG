#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5937;
_Bool var_5 = (_Bool)1;
signed char var_12 = (signed char)-90;
short var_13 = (short)31824;
unsigned short var_14 = (unsigned short)61998;
short var_15 = (short)-11814;
unsigned long long int var_18 = 17783866681343076736ULL;
signed char var_19 = (signed char)-85;
int zero = 0;
signed char var_20 = (signed char)-115;
unsigned int var_21 = 721995911U;
int var_22 = -1806994638;
unsigned int var_23 = 1490817787U;
int var_24 = -1746748711;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

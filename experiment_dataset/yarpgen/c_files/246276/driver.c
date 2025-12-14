#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1937325666;
unsigned long long int var_2 = 13949153425046655059ULL;
unsigned long long int var_3 = 16545571504329998393ULL;
unsigned long long int var_7 = 3918670783821628763ULL;
short var_8 = (short)-7899;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 7948392700466929115ULL;
signed char var_16 = (signed char)-110;
int zero = 0;
int var_17 = 1349892655;
unsigned int var_18 = 3802028275U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

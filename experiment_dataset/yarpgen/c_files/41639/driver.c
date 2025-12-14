#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)14617;
signed char var_7 = (signed char)-99;
unsigned long long int var_8 = 657277400178437956ULL;
signed char var_9 = (signed char)119;
unsigned short var_13 = (unsigned short)25051;
unsigned short var_15 = (unsigned short)15281;
int zero = 0;
signed char var_19 = (signed char)86;
signed char var_20 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

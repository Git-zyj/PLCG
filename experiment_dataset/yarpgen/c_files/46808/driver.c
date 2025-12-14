#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1373212675550522655LL;
int var_5 = -4139417;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-44;
_Bool var_11 = (_Bool)0;
short var_14 = (short)-11628;
short var_16 = (short)-18794;
int zero = 0;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)38;
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

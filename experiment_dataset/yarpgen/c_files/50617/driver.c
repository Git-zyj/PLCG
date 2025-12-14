#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-82;
int var_3 = -1019869948;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-10517;
short var_11 = (short)-6577;
int zero = 0;
short var_13 = (short)21536;
unsigned long long int var_14 = 7939743094071950978ULL;
unsigned int var_15 = 377675844U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
long long int var_1 = 6934812863880756459LL;
long long int var_2 = -4550906664696254201LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 570524012250849125ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_12 = (short)27582;
unsigned int var_13 = 2727774745U;
signed char var_14 = (signed char)-38;
short var_15 = (short)18445;
long long int var_16 = 908813453071771775LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

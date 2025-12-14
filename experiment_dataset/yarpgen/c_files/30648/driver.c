#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3466820180U;
unsigned short var_8 = (unsigned short)27865;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 4369767543774669130ULL;
int zero = 0;
short var_16 = (short)-5153;
signed char var_17 = (signed char)104;
long long int var_18 = 6783108800745058157LL;
signed char var_19 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

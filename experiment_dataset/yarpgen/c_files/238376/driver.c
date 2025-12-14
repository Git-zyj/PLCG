#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18219;
unsigned int var_4 = 2577077352U;
_Bool var_5 = (_Bool)0;
long long int var_8 = -4235297413078490531LL;
unsigned int var_10 = 4181299438U;
unsigned short var_12 = (unsigned short)39339;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = 953275276;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = -79583067240551696LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47344;
short var_7 = (short)-10872;
unsigned long long int var_8 = 10147031432392524986ULL;
long long int var_12 = -8440731572629020569LL;
int zero = 0;
unsigned int var_16 = 562849489U;
unsigned char var_17 = (unsigned char)190;
short var_18 = (short)28995;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)58141;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31061;
unsigned long long int var_3 = 3649027469456617496ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)21774;
int zero = 0;
unsigned short var_12 = (unsigned short)45703;
unsigned long long int var_13 = 15813308111909332185ULL;
short var_14 = (short)-13391;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

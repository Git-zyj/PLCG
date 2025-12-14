#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23297;
unsigned short var_2 = (unsigned short)60511;
unsigned int var_4 = 4202929615U;
unsigned short var_8 = (unsigned short)58992;
long long int var_11 = 3766763702708346599LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)25618;
short var_16 = (short)-29190;
void init() {
}

void checksum() {
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

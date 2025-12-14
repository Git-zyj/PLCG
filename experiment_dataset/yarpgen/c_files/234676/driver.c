#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
_Bool var_3 = (_Bool)0;
long long int var_6 = 4994069703167470095LL;
int var_8 = -135015668;
unsigned int var_9 = 1025023720U;
unsigned long long int var_10 = 9709646450144978091ULL;
signed char var_16 = (signed char)-48;
int zero = 0;
short var_20 = (short)3525;
short var_21 = (short)32581;
unsigned char var_22 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

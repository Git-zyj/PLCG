#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = 3981423874086014461LL;
long long int var_8 = 1209089889458852232LL;
unsigned short var_9 = (unsigned short)38047;
int zero = 0;
short var_14 = (short)-16434;
long long int var_15 = -5203878381698056146LL;
unsigned char var_16 = (unsigned char)95;
unsigned char var_17 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

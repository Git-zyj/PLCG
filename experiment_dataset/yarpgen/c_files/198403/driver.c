#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5902003897515224243LL;
short var_4 = (short)-18730;
unsigned char var_5 = (unsigned char)80;
unsigned int var_7 = 4249914616U;
long long int var_8 = 5018989610060432149LL;
long long int var_11 = -5030330080469878933LL;
unsigned int var_14 = 1204885976U;
int zero = 0;
short var_15 = (short)-4496;
int var_16 = -376738586;
unsigned long long int var_17 = 3914394590629635476ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

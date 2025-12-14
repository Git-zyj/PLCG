#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
_Bool var_1 = (_Bool)1;
long long int var_2 = -5454297752264492403LL;
unsigned int var_3 = 2187358529U;
short var_4 = (short)14942;
unsigned int var_5 = 3279635384U;
long long int var_6 = -6891753491593549535LL;
long long int var_7 = 5308982696953090442LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)106;
int var_13 = 588042249;
long long int var_14 = 521816738686977467LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31387;
unsigned char var_4 = (unsigned char)91;
_Bool var_11 = (_Bool)1;
unsigned long long int var_17 = 6031203293795674883ULL;
int zero = 0;
short var_19 = (short)18953;
signed char var_20 = (signed char)54;
long long int var_21 = 3176582189459600396LL;
int var_22 = -1811523749;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

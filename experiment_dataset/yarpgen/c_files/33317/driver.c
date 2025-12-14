#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7846288922856803069LL;
long long int var_7 = -7492300323007186173LL;
unsigned short var_9 = (unsigned short)55594;
signed char var_11 = (signed char)11;
short var_12 = (short)6300;
unsigned short var_13 = (unsigned short)63183;
unsigned short var_16 = (unsigned short)60389;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)54536;
short var_20 = (short)-3617;
void init() {
}

void checksum() {
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

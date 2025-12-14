#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14181;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-26739;
signed char var_11 = (signed char)-56;
long long int var_17 = -785567723785615861LL;
int zero = 0;
signed char var_20 = (signed char)69;
unsigned long long int var_21 = 4383234155849066600ULL;
long long int var_22 = -5055368418336267192LL;
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

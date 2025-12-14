#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -722903602270521031LL;
unsigned short var_4 = (unsigned short)42633;
short var_8 = (short)10468;
int var_11 = -1109053173;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_20 = -8299239841591729763LL;
int var_21 = 328708216;
signed char var_22 = (signed char)122;
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

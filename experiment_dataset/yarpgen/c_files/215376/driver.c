#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -585722893998309670LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-29648;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2315952799290218001LL;
signed char var_13 = (signed char)29;
int zero = 0;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
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

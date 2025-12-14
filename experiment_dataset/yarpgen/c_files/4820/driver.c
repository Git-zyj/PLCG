#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
long long int var_3 = 8267677253875446974LL;
short var_4 = (short)-13322;
unsigned char var_10 = (unsigned char)239;
_Bool var_11 = (_Bool)1;
int var_12 = -1727000366;
int zero = 0;
short var_16 = (short)4403;
signed char var_17 = (signed char)19;
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

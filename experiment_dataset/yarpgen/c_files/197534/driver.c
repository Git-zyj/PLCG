#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12816;
unsigned short var_8 = (unsigned short)57734;
short var_11 = (short)-28399;
_Bool var_12 = (_Bool)1;
unsigned short var_16 = (unsigned short)39134;
int zero = 0;
long long int var_17 = 8183548585186780105LL;
long long int var_18 = 3762759802793762143LL;
int var_19 = -748738098;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

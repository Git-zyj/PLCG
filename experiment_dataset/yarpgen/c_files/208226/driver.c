#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9452623398228364222ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -510593630549370931LL;
unsigned short var_12 = (unsigned short)11654;
unsigned long long int var_13 = 5357838623929247496ULL;
long long int var_15 = 2113583790074534165LL;
unsigned short var_16 = (unsigned short)18974;
unsigned long long int var_17 = 2683789091245214900ULL;
int zero = 0;
short var_18 = (short)-31539;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9599626741996775730ULL;
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

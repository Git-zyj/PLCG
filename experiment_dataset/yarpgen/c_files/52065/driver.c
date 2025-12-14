#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1223465406U;
short var_3 = (short)-5588;
_Bool var_6 = (_Bool)1;
int var_8 = -443847781;
unsigned long long int var_12 = 7843758891664922920ULL;
short var_15 = (short)17966;
int zero = 0;
int var_19 = -1936017344;
unsigned short var_20 = (unsigned short)12458;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1050400400;
short var_3 = (short)21776;
long long int var_6 = 3705524137723811760LL;
short var_7 = (short)32300;
unsigned short var_11 = (unsigned short)32231;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 9708300418619272300ULL;
short var_19 = (short)-21391;
void init() {
}

void checksum() {
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

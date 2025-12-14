#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1977473786U;
signed char var_3 = (signed char)31;
unsigned short var_4 = (unsigned short)21197;
int var_5 = -1428774915;
_Bool var_6 = (_Bool)0;
int var_7 = 401507424;
short var_8 = (short)-6682;
short var_10 = (short)-11156;
int var_11 = 1154648306;
int zero = 0;
signed char var_16 = (signed char)127;
unsigned short var_17 = (unsigned short)16440;
unsigned long long int var_18 = 14106939976821581099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

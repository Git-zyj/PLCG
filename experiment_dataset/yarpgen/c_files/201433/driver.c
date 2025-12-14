#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1279021519;
short var_4 = (short)22441;
unsigned short var_5 = (unsigned short)58846;
signed char var_8 = (signed char)-10;
short var_10 = (short)-5371;
int zero = 0;
unsigned int var_17 = 1175683066U;
int var_18 = -564860902;
unsigned int var_19 = 2359122537U;
unsigned long long int var_20 = 16392798957356436286ULL;
long long int var_21 = 3219244436061378080LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 720130440;
unsigned int var_1 = 1957560906U;
short var_2 = (short)-28415;
unsigned short var_3 = (unsigned short)65015;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)17400;
int var_7 = 655474785;
short var_9 = (short)-21840;
short var_11 = (short)13510;
unsigned int var_15 = 3720937308U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3827796079264741032LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -417152149;
unsigned int var_1 = 794994627U;
unsigned int var_2 = 1617681448U;
int var_4 = -556523021;
_Bool var_11 = (_Bool)0;
short var_13 = (short)21155;
long long int var_14 = -897276044284339196LL;
int zero = 0;
int var_15 = -465667987;
int var_16 = 26438138;
unsigned char var_17 = (unsigned char)142;
unsigned long long int var_18 = 8437239634729371857ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

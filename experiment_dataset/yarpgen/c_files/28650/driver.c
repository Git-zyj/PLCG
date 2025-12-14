#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9863;
unsigned int var_2 = 1210528860U;
int var_3 = 883737217;
unsigned short var_4 = (unsigned short)15303;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 5356083632776521437ULL;
int var_9 = 15954176;
long long int var_13 = -9055023486497784037LL;
long long int var_14 = 7488503775266857682LL;
unsigned long long int var_16 = 9697734225160986812ULL;
int zero = 0;
unsigned long long int var_19 = 15820119949807580268ULL;
unsigned long long int var_20 = 13416274916427785160ULL;
unsigned short var_21 = (unsigned short)43218;
int var_22 = 1732167954;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

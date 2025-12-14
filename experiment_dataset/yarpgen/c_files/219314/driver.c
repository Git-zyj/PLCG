#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7245165468745702751LL;
unsigned short var_2 = (unsigned short)44943;
unsigned short var_3 = (unsigned short)39078;
short var_4 = (short)4890;
_Bool var_6 = (_Bool)0;
long long int var_8 = -5824324334813303335LL;
int var_9 = -1018810179;
unsigned int var_10 = 3775829301U;
long long int var_12 = 3340708935716480814LL;
unsigned short var_13 = (unsigned short)11305;
int zero = 0;
unsigned short var_14 = (unsigned short)9283;
unsigned short var_15 = (unsigned short)16717;
unsigned long long int var_16 = 13306854369126210525ULL;
unsigned int var_17 = 2021384779U;
unsigned short var_18 = (unsigned short)13013;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

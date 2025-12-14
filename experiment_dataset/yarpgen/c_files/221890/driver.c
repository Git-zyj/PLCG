#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2109139493446774964LL;
unsigned short var_1 = (unsigned short)1057;
unsigned long long int var_2 = 5331667973865570616ULL;
unsigned int var_3 = 347679253U;
long long int var_4 = -2840660927329964658LL;
long long int var_6 = 6501623937327584198LL;
int var_7 = -1592670744;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)3305;
int var_10 = -1767821873;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)44781;
short var_13 = (short)29954;
unsigned short var_14 = (unsigned short)9809;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

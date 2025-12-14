#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 95647512U;
long long int var_1 = -756343902419430277LL;
_Bool var_2 = (_Bool)1;
int var_3 = -178436701;
long long int var_4 = 3907607418521533524LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1655547493U;
unsigned int var_7 = 275447394U;
int var_8 = 1352813388;
unsigned short var_10 = (unsigned short)15506;
int zero = 0;
unsigned int var_11 = 4205405608U;
long long int var_12 = 6516773472212367882LL;
unsigned long long int var_13 = 5275454394542799179ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

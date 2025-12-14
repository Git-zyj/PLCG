#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8708;
short var_2 = (short)-783;
unsigned long long int var_3 = 4423710666387833752ULL;
int var_4 = 1777788055;
unsigned int var_5 = 1891856172U;
unsigned long long int var_6 = 14983754608807045108ULL;
long long int var_9 = -5507049486311159113LL;
long long int var_10 = 2345617931118613450LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4916868154023868764ULL;
long long int var_13 = -3447215242069602995LL;
unsigned char var_14 = (unsigned char)108;
unsigned long long int var_15 = 14598344827358786139ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

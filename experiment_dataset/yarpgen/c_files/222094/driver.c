#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48885;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2171657700U;
signed char var_3 = (signed char)-17;
short var_5 = (short)-29555;
unsigned int var_6 = 834863912U;
unsigned int var_7 = 4069938405U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6986277442899351512LL;
long long int var_11 = -7480614600745855359LL;
short var_12 = (short)-6883;
long long int var_14 = -83956113127219906LL;
unsigned int var_15 = 3158039544U;
unsigned long long int var_16 = 1744922156436970184ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)105;
void init() {
}

void checksum() {
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

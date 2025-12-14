#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2229950627288727675ULL;
unsigned long long int var_1 = 14881309354920350352ULL;
long long int var_3 = -7686697501816948921LL;
unsigned long long int var_8 = 2977401869929497147ULL;
unsigned int var_10 = 2352111582U;
unsigned long long int var_11 = 6643067157166282471ULL;
unsigned short var_12 = (unsigned short)56438;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-1009;
int zero = 0;
long long int var_15 = -3798864976445465790LL;
long long int var_16 = 925554725730033920LL;
unsigned char var_17 = (unsigned char)240;
unsigned short var_18 = (unsigned short)7135;
void init() {
}

void checksum() {
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

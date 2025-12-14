#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)54924;
long long int var_4 = 812099867443429174LL;
unsigned char var_5 = (unsigned char)250;
unsigned long long int var_7 = 3861774519622459165ULL;
short var_9 = (short)-7097;
int zero = 0;
long long int var_10 = 826367800077926815LL;
unsigned long long int var_11 = 12226681028397310935ULL;
unsigned int var_12 = 2149571633U;
unsigned long long int var_13 = 17269290488612627754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

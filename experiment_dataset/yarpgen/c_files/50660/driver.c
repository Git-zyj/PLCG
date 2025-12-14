#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15924520031546565833ULL;
long long int var_7 = 7053668192141915847LL;
long long int var_10 = 4031104024587195604LL;
long long int var_13 = 7843418657706027645LL;
unsigned int var_14 = 2606256341U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2259121544U;
int zero = 0;
unsigned long long int var_18 = 8366601086501353636ULL;
unsigned long long int var_19 = 5073749962777673257ULL;
unsigned long long int var_20 = 10775295510873261039ULL;
unsigned long long int var_21 = 17676544970725753070ULL;
unsigned long long int var_22 = 16711845151899954127ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

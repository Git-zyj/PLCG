#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3282840380U;
long long int var_4 = 9125703497868625298LL;
unsigned int var_5 = 2458967766U;
unsigned short var_6 = (unsigned short)17844;
int var_7 = -107360703;
long long int var_8 = -5212168523740589428LL;
long long int var_9 = 3158428530303268053LL;
int var_10 = -416112588;
int zero = 0;
unsigned long long int var_11 = 2638399922327300899ULL;
int var_12 = -189436729;
unsigned char var_13 = (unsigned char)64;
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

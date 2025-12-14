#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8772848075545055514LL;
long long int var_2 = 4705409458091914891LL;
int var_3 = 1984762899;
unsigned int var_5 = 1833585384U;
signed char var_6 = (signed char)-45;
int var_7 = 2104249557;
unsigned int var_8 = 107712855U;
int var_9 = 1647948352;
unsigned int var_10 = 3115602166U;
unsigned char var_12 = (unsigned char)255;
unsigned int var_13 = 3175707453U;
unsigned char var_14 = (unsigned char)203;
long long int var_16 = -7083299364178881870LL;
unsigned char var_17 = (unsigned char)98;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-11098;
short var_20 = (short)-5960;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

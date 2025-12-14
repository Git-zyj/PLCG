#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1294085230116302785LL;
unsigned long long int var_1 = 17049116702763957661ULL;
long long int var_3 = 4817146298507899596LL;
int var_4 = -1452537379;
unsigned int var_6 = 1960008567U;
unsigned long long int var_9 = 14307611030992726028ULL;
unsigned char var_10 = (unsigned char)238;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)57541;
unsigned long long int var_14 = 4747822399047722657ULL;
int zero = 0;
long long int var_15 = -3297132656637191792LL;
signed char var_16 = (signed char)-103;
unsigned char var_17 = (unsigned char)158;
_Bool var_18 = (_Bool)0;
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

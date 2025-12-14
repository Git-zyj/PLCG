#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2307;
unsigned long long int var_2 = 9192701358621167520ULL;
unsigned long long int var_5 = 8065867094082472410ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 13632008586007797479ULL;
short var_9 = (short)-29394;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = -1811317898;
unsigned long long int var_15 = 10436089577329737067ULL;
int var_16 = 481330847;
short var_17 = (short)20194;
int var_18 = -1407396133;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

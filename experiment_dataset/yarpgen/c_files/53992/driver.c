#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2107901229;
long long int var_2 = 2515911207850825626LL;
unsigned long long int var_4 = 5070140728614709709ULL;
int var_5 = 630949610;
unsigned long long int var_6 = 17844897316949575186ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5971916036832330644ULL;
unsigned short var_10 = (unsigned short)4219;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1068254871U;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-92;
signed char var_18 = (signed char)-94;
long long int var_19 = -4398996149744995709LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

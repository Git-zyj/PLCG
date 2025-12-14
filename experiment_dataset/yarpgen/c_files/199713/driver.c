#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 774785695U;
short var_11 = (short)26102;
long long int var_13 = -6075798713904374098LL;
short var_14 = (short)-5338;
long long int var_16 = 5682749145827519081LL;
int zero = 0;
int var_17 = -939923781;
unsigned short var_18 = (unsigned short)6217;
unsigned int var_19 = 1734781655U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 813454766U;
unsigned short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)17956;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

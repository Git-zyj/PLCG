#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1315792593U;
long long int var_3 = -7631472154064044814LL;
long long int var_11 = -6014517079761581808LL;
unsigned short var_13 = (unsigned short)22352;
int zero = 0;
unsigned short var_15 = (unsigned short)61766;
unsigned int var_16 = 3806417839U;
int var_17 = 1419022168;
unsigned long long int var_18 = 15657903640691809847ULL;
long long int arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4956617983464603160LL;
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

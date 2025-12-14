#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2882670357512128880LL;
long long int var_7 = -2721801335523876751LL;
int var_9 = -2085168027;
long long int var_10 = -6802157585067343876LL;
int var_11 = -1244650101;
unsigned short var_13 = (unsigned short)1871;
long long int var_15 = -6404394250435673844LL;
int zero = 0;
int var_16 = 1979222584;
int var_17 = 164343097;
unsigned char var_18 = (unsigned char)59;
unsigned short var_19 = (unsigned short)31712;
short var_20 = (short)-19674;
long long int var_21 = -7425362064344848922LL;
long long int arr_1 [25] [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1476679475765178576LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -6461959254777651518LL;
}

void checksum() {
    hash(&seed, var_16);
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

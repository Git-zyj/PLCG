#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3366401206U;
long long int var_4 = -7776163667748095950LL;
_Bool var_7 = (_Bool)0;
long long int var_13 = 7761272405508700580LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2147954917589424018LL;
int var_18 = -314738763;
unsigned short var_19 = (unsigned short)21457;
unsigned int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3589864764U;
}

void checksum() {
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned int var_5 = 1609477825U;
unsigned int var_7 = 2229949608U;
short var_9 = (short)7173;
long long int var_10 = 8014426080371721205LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned short var_15 = (unsigned short)47840;
unsigned long long int var_16 = 6183524754976706371ULL;
unsigned long long int var_17 = 1914279069567431555ULL;
unsigned char var_18 = (unsigned char)223;
unsigned long long int var_19 = 4896380299612128899ULL;
long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -7323406860918488021LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

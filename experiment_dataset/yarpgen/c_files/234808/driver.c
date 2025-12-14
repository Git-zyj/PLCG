#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53430;
unsigned int var_1 = 2684384142U;
unsigned long long int var_3 = 4606515073870743125ULL;
unsigned int var_4 = 2183033408U;
unsigned long long int var_5 = 10832902511718361531ULL;
unsigned short var_6 = (unsigned short)16122;
unsigned int var_7 = 2413684982U;
unsigned long long int var_9 = 7115593813874111919ULL;
unsigned short var_10 = (unsigned short)40178;
unsigned int var_12 = 2200680653U;
unsigned short var_15 = (unsigned short)7965;
unsigned short var_16 = (unsigned short)5682;
int zero = 0;
unsigned short var_19 = (unsigned short)9375;
unsigned short var_20 = (unsigned short)50073;
unsigned int var_21 = 1440776323U;
unsigned long long int var_22 = 10943836525873229786ULL;
unsigned int var_23 = 3763018177U;
unsigned long long int var_24 = 5258263029729254160ULL;
unsigned long long int var_25 = 9189841089957807962ULL;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 13719594611979682907ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3454000131U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

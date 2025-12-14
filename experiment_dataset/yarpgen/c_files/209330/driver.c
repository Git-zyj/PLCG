#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
unsigned long long int var_7 = 16761246481786856899ULL;
unsigned short var_8 = (unsigned short)19444;
unsigned char var_12 = (unsigned char)232;
int zero = 0;
unsigned short var_13 = (unsigned short)61417;
unsigned long long int var_14 = 1491765266651736549ULL;
unsigned long long int var_15 = 12091495517424093317ULL;
unsigned int var_16 = 105889498U;
long long int var_17 = 8833124132417032631LL;
int var_18 = 1858471545;
_Bool arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
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

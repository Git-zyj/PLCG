#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned long long int var_3 = 15353881281183219874ULL;
signed char var_4 = (signed char)-25;
long long int var_7 = 2111626756628790174LL;
unsigned short var_8 = (unsigned short)62375;
unsigned long long int var_10 = 3297911260102086860ULL;
long long int var_12 = -7395034954910764361LL;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned long long int var_20 = 2377227293923118981ULL;
unsigned int var_21 = 3151347498U;
unsigned int var_22 = 2309751266U;
unsigned long long int var_23 = 17682969718891545940ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = -6308914769236809805LL;
_Bool arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
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

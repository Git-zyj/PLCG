#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -547162504;
unsigned char var_3 = (unsigned char)228;
long long int var_4 = -2670366106939060141LL;
short var_6 = (short)706;
unsigned short var_7 = (unsigned short)18913;
int var_9 = -868166243;
long long int var_15 = -308627938728196739LL;
int zero = 0;
unsigned long long int var_16 = 14043611970091188116ULL;
long long int var_17 = 2910682344817555931LL;
unsigned char var_18 = (unsigned char)249;
unsigned short var_19 = (unsigned short)33536;
long long int var_20 = 376556764929147949LL;
unsigned char var_21 = (unsigned char)23;
unsigned short var_22 = (unsigned short)63329;
long long int var_23 = 8146039570768982272LL;
short var_24 = (short)23907;
unsigned long long int arr_5 [22] [22] ;
_Bool arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 7769519126603448305ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

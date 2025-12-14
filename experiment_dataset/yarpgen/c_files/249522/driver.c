#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned short var_5 = (unsigned short)50756;
signed char var_6 = (signed char)84;
signed char var_7 = (signed char)-31;
unsigned short var_9 = (unsigned short)22782;
long long int var_10 = 3800302717706130579LL;
signed char var_11 = (signed char)45;
int zero = 0;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)9261;
long long int var_14 = -3864395299747682292LL;
signed char var_15 = (signed char)-20;
signed char var_16 = (signed char)-17;
signed char var_17 = (signed char)83;
long long int var_18 = 5749006105681961814LL;
signed char var_19 = (signed char)-54;
unsigned short arr_2 [24] [24] ;
signed char arr_3 [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)23589;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61223 : (unsigned short)15492;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

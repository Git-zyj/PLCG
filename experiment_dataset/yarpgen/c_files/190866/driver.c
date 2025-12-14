#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)106;
int var_2 = 143799486;
unsigned short var_3 = (unsigned short)25343;
unsigned long long int var_5 = 9434114066348178512ULL;
unsigned long long int var_6 = 18065709204817731384ULL;
signed char var_7 = (signed char)-97;
unsigned int var_9 = 43974529U;
unsigned long long int var_11 = 3320812356486715125ULL;
unsigned long long int var_12 = 11452752849724521036ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 575266532U;
unsigned short var_16 = (unsigned short)41808;
unsigned short var_17 = (unsigned short)53834;
long long int var_18 = 4507624704266714480LL;
int var_19 = 367980694;
unsigned char var_20 = (unsigned char)9;
long long int arr_0 [12] ;
long long int arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1768881444219207381LL : -1343946228040815745LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -5603524261998945873LL : -706136301739797868LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 7892408763817908505ULL : 16615241066013102427ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

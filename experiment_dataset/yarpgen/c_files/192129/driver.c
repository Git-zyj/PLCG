#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -952170258246889910LL;
short var_3 = (short)9035;
signed char var_5 = (signed char)-114;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)35696;
long long int var_8 = 5406761983543495952LL;
unsigned short var_9 = (unsigned short)17037;
signed char var_11 = (signed char)-3;
unsigned short var_12 = (unsigned short)30346;
_Bool var_13 = (_Bool)0;
int var_15 = 629031539;
int zero = 0;
signed char var_17 = (signed char)-68;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)6184;
int arr_3 [24] ;
unsigned char arr_6 [24] [24] [24] ;
signed char arr_9 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2017610833;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-116;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

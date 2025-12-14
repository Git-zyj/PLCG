#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
long long int var_3 = 146327193448252857LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64312;
signed char var_8 = (signed char)-74;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12758223329759546043ULL;
int zero = 0;
long long int var_14 = -6883160931411719228LL;
unsigned short var_15 = (unsigned short)708;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9014428699897789898ULL;
unsigned long long int var_19 = 16273062874316901921ULL;
long long int arr_0 [24] ;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -4509310943238497563LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1289681 : -187247876;
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

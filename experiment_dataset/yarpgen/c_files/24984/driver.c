#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24332;
short var_2 = (short)25395;
short var_3 = (short)-11094;
unsigned char var_7 = (unsigned char)156;
unsigned long long int var_8 = 14768270381170777809ULL;
long long int var_9 = 2941030965378844178LL;
int var_10 = 131295246;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_13 = -6442487237598272890LL;
int zero = 0;
long long int var_14 = -1657668356769569788LL;
unsigned short var_15 = (unsigned short)47673;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)26443;
unsigned long long int var_18 = 10739801384160095725ULL;
long long int var_19 = -1099193022953839246LL;
signed char var_20 = (signed char)122;
unsigned char arr_1 [17] ;
unsigned short arr_3 [17] ;
_Bool arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10943 : (unsigned short)30216;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

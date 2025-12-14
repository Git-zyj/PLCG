#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned int var_2 = 3214650652U;
_Bool var_4 = (_Bool)0;
signed char var_9 = (signed char)-37;
signed char var_11 = (signed char)84;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 3670105366U;
unsigned short var_16 = (unsigned short)17328;
unsigned short var_17 = (unsigned short)57176;
long long int var_19 = 6498591036584808446LL;
int zero = 0;
unsigned char var_20 = (unsigned char)117;
short var_21 = (short)-30353;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 12362063636501064270ULL;
signed char var_24 = (signed char)55;
unsigned long long int var_25 = 14147866276393949787ULL;
short var_26 = (short)-6055;
short var_27 = (short)21684;
short var_28 = (short)786;
signed char var_29 = (signed char)-71;
short var_30 = (short)-18309;
signed char var_31 = (signed char)3;
unsigned char var_32 = (unsigned char)199;
short arr_0 [13] ;
long long int arr_3 [13] [13] [13] ;
signed char arr_4 [13] [13] ;
signed char arr_5 [13] ;
unsigned char arr_6 [13] [13] [13] ;
unsigned short arr_8 [13] [13] [13] [13] ;
unsigned int arr_10 [21] [21] ;
unsigned short arr_11 [21] ;
unsigned long long int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)28521;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7455965639794959423LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-102 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7783;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 1614415891U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)62693;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9821568718591485404ULL : 3056511329610835960ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

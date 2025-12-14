#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 554581939893496278LL;
_Bool var_1 = (_Bool)0;
int var_2 = -126675365;
signed char var_3 = (signed char)-28;
int var_5 = 570854063;
long long int var_6 = 1234488208130047619LL;
long long int var_7 = -1155061173447241989LL;
signed char var_8 = (signed char)-47;
long long int var_9 = 8926216528151743072LL;
long long int var_10 = -8379271764410186917LL;
long long int var_12 = -8822610648649902102LL;
short var_13 = (short)3113;
signed char var_14 = (signed char)-45;
int var_15 = -1009348894;
int zero = 0;
signed char var_17 = (signed char)-67;
unsigned int var_18 = 3500928638U;
long long int var_19 = -1989561715356352532LL;
unsigned char arr_0 [10] [10] ;
signed char arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] ;
int arr_3 [10] ;
long long int arr_5 [10] [10] ;
unsigned short arr_6 [10] [10] [10] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 17226964935636625088ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -213062393;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 7996466130051471752LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4564;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -776221905;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

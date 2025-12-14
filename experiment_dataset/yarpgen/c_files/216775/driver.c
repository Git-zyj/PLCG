#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 164386823U;
unsigned int var_1 = 3516592112U;
unsigned int var_2 = 3359265264U;
unsigned int var_3 = 3092587097U;
unsigned int var_4 = 1869520643U;
unsigned int var_5 = 279255782U;
unsigned long long int var_6 = 8900868907471023864ULL;
unsigned long long int var_7 = 14304440092347898240ULL;
unsigned int var_8 = 3541301875U;
unsigned int var_10 = 1005736159U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 556368777U;
_Bool var_15 = (_Bool)0;
int var_16 = -598787453;
unsigned long long int var_17 = 12686694502703583912ULL;
unsigned int var_18 = 1942337487U;
int zero = 0;
int var_19 = 402702886;
unsigned int var_20 = 3552457366U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1484748397U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7354105555620356188ULL;
unsigned int arr_0 [14] [14] ;
unsigned int arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3489160651U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1256808570U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1057003293U : 3672944025U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1371663896;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 4228671754U : 876802243U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

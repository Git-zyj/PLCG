#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -209400978;
signed char var_1 = (signed char)97;
signed char var_2 = (signed char)-126;
long long int var_3 = 3587043899350077358LL;
long long int var_4 = -6783013483969901437LL;
unsigned short var_5 = (unsigned short)18209;
long long int var_6 = 6830354405470774256LL;
int var_7 = -2123486128;
signed char var_10 = (signed char)-95;
int var_11 = 640259941;
unsigned short var_12 = (unsigned short)4538;
int zero = 0;
long long int var_13 = -3051159815482824372LL;
unsigned long long int var_14 = 10822929207825922567ULL;
int var_15 = -223116238;
int var_16 = -976608658;
signed char var_17 = (signed char)-31;
long long int var_18 = -9144046895101683971LL;
signed char var_19 = (signed char)112;
long long int arr_2 [16] [16] ;
long long int arr_3 [16] ;
int arr_4 [16] [16] ;
int arr_6 [16] [16] [16] ;
long long int arr_9 [16] ;
int arr_10 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -3396949170953565066LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1885960493363191719LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -871457500 : -1489028162;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -764075642 : -905639036;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9161532127213842525LL : -7321659115598644807LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -380834567;
}

void checksum() {
    hash(&seed, var_13);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8181293983924272086LL;
_Bool var_1 = (_Bool)1;
int var_2 = 540573843;
unsigned char var_5 = (unsigned char)180;
unsigned char var_7 = (unsigned char)108;
unsigned long long int var_8 = 3092918094053300004ULL;
signed char var_9 = (signed char)-28;
int zero = 0;
unsigned int var_11 = 1811044002U;
long long int var_12 = -7604941672936013718LL;
unsigned long long int var_13 = 690430323266537156ULL;
unsigned int var_14 = 505049847U;
unsigned int var_15 = 1983820347U;
signed char var_16 = (signed char)-45;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_4 [22] ;
unsigned int arr_5 [22] [22] [22] [22] ;
short arr_6 [22] ;
unsigned long long int arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 10212767258521219621ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1659583231U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)15605;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5509928445031166216ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

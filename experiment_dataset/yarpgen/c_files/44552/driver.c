#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5657210154829371179ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 810468664U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3632194701U;
signed char var_9 = (signed char)17;
short var_11 = (short)30076;
int zero = 0;
unsigned int var_12 = 1432948082U;
long long int var_13 = 3748813156198119843LL;
unsigned short var_14 = (unsigned short)11766;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 244633392U;
unsigned int var_17 = 4039113966U;
unsigned long long int arr_0 [14] ;
signed char arr_2 [14] ;
int arr_5 [14] ;
short arr_8 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7257389064780081147ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2115398032;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)23507;
}

void checksum() {
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

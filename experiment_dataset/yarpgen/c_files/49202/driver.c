#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4364578889562670502ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)236;
unsigned short var_5 = (unsigned short)60267;
int var_8 = 731955011;
unsigned short var_13 = (unsigned short)25349;
int zero = 0;
long long int var_15 = -6199569976938975530LL;
unsigned long long int var_16 = 2721587503259513071ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4147211014053754559ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)105;
signed char arr_3 [17] [17] ;
signed char arr_8 [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 2504922820985128463ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

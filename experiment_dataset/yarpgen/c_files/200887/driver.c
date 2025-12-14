#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11097794114089001864ULL;
signed char var_2 = (signed char)116;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)42;
int zero = 0;
unsigned long long int var_17 = 8666834273485219960ULL;
unsigned long long int var_18 = 7410168780094713771ULL;
long long int var_19 = -3231982100878926482LL;
unsigned long long int var_20 = 5508384154116043812ULL;
unsigned long long int var_21 = 10685972171770033744ULL;
signed char var_22 = (signed char)-7;
unsigned long long int var_23 = 13128319343081615387ULL;
_Bool var_24 = (_Bool)1;
unsigned char arr_0 [17] [17] ;
signed char arr_1 [17] ;
signed char arr_2 [17] [17] [17] ;
unsigned char arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)168;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

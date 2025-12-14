#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
signed char var_1 = (signed char)28;
signed char var_2 = (signed char)32;
unsigned long long int var_3 = 7900408850220895151ULL;
long long int var_5 = -7100294345262168955LL;
unsigned int var_6 = 1404249929U;
unsigned long long int var_10 = 11281807073343132831ULL;
long long int var_11 = 2173749304511859030LL;
int zero = 0;
unsigned int var_14 = 2597617294U;
int var_15 = 2091550775;
unsigned long long int var_16 = 1337978875752954473ULL;
signed char var_17 = (signed char)-117;
unsigned int var_18 = 1000262636U;
long long int var_19 = -7608506734833757049LL;
int var_20 = -220061039;
signed char var_21 = (signed char)25;
unsigned long long int var_22 = 2457009620823191314ULL;
signed char arr_0 [10] ;
int arr_1 [10] ;
long long int arr_2 [10] [10] ;
int arr_3 [10] ;
signed char arr_4 [10] [10] [10] ;
signed char arr_6 [10] [10] ;
int arr_7 [10] ;
unsigned long long int arr_11 [14] ;
signed char arr_5 [10] [10] ;
unsigned long long int arr_9 [10] ;
unsigned long long int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1703729920;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -5027839614015775885LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2087394214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1229333899;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 16943612654994752952ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 1546735147668300866ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 10855167964775730185ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

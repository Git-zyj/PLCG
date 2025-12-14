#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4832423693342933291LL;
unsigned long long int var_1 = 10453111159038048370ULL;
unsigned char var_2 = (unsigned char)205;
short var_3 = (short)13021;
unsigned int var_4 = 1469392458U;
short var_5 = (short)21169;
unsigned char var_6 = (unsigned char)93;
long long int var_7 = 476911291317662209LL;
unsigned char var_8 = (unsigned char)170;
int var_9 = 2096582134;
unsigned int var_10 = 380664190U;
unsigned long long int var_11 = 738348544186427051ULL;
unsigned char var_12 = (unsigned char)13;
int zero = 0;
unsigned int var_13 = 3828186638U;
unsigned int var_14 = 669332511U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)200;
int var_17 = 1976879757;
int arr_0 [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned long long int arr_3 [17] [17] ;
short arr_5 [17] ;
int arr_6 [17] ;
unsigned long long int arr_9 [17] ;
unsigned long long int arr_10 [17] [17] ;
unsigned int arr_11 [17] ;
unsigned char arr_12 [17] [17] ;
unsigned int arr_4 [17] ;
long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1684493332;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-40 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 14786960331778664706ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5426055786248379263ULL : 16369172836279814495ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-30991 : (short)-9282;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 496579479;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 311490810752771492ULL : 7773786035675833001ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 9812387738063442444ULL : 8573872514344838010ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3998418219U : 2253741165U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2151916302U : 694053151U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5811510438063334725LL : -7698841298701966938LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2172248980U;
unsigned int var_2 = 1361588810U;
long long int var_3 = -3087456108148216062LL;
long long int var_6 = -6605069644366882260LL;
long long int var_7 = -2830104447461085137LL;
short var_8 = (short)949;
short var_9 = (short)-24970;
short var_10 = (short)-15415;
unsigned long long int var_14 = 4352152656028680703ULL;
short var_16 = (short)-13674;
signed char var_17 = (signed char)62;
int zero = 0;
long long int var_18 = -5234783353769455193LL;
unsigned long long int var_19 = 8586621422214353733ULL;
unsigned long long int var_20 = 11171484254400185601ULL;
unsigned long long int var_21 = 17333775325923049057ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-19883;
short var_24 = (short)18414;
long long int var_25 = 1664835993949440119LL;
_Bool arr_0 [14] ;
signed char arr_1 [14] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)58709;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5375479317202660446LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -6294954821283365115LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5995333574254763589LL;
unsigned int var_2 = 1529162646U;
unsigned int var_3 = 3683724768U;
short var_4 = (short)22935;
unsigned char var_5 = (unsigned char)91;
unsigned int var_6 = 1131403163U;
long long int var_7 = 2908561323692174678LL;
unsigned char var_8 = (unsigned char)180;
unsigned int var_9 = 1375349471U;
int zero = 0;
unsigned long long int var_10 = 12623589804888457452ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8056413180110612835ULL;
short var_13 = (short)27918;
short arr_1 [23] [23] ;
unsigned int arr_2 [23] [23] ;
long long int arr_3 [23] [23] [23] ;
long long int arr_4 [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)23635;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1658467359U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -2461815848480110192LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -1390621906827172649LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -4716985208353253749LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

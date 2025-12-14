#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 1194348057853857018ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 8722290912907707360ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 5340717320565235579ULL;
unsigned long long int var_19 = 5869988976673730028ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8955786937032150868ULL;
unsigned long long int var_23 = 17913587416225743283ULL;
unsigned long long int arr_0 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 14455042690350598704ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)174;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

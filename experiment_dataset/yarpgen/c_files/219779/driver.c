#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9040178317479226661ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17496585099820386658ULL;
int var_6 = -1125090357;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11337012968165097727ULL;
int zero = 0;
signed char var_11 = (signed char)123;
unsigned char var_12 = (unsigned char)78;
unsigned long long int var_13 = 14133401122902523341ULL;
unsigned int var_14 = 1157177798U;
long long int var_15 = -3690438394880550399LL;
unsigned int var_16 = 684328999U;
unsigned short var_17 = (unsigned short)32845;
unsigned short arr_10 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)57974;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 5165425855719958585ULL : 9094300341994193384ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

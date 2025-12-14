#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 238411103714639409ULL;
unsigned int var_8 = 3601640108U;
signed char var_9 = (signed char)79;
signed char var_11 = (signed char)-13;
unsigned long long int var_14 = 6100623730108915154ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-7;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)26;
signed char var_22 = (signed char)-76;
long long int var_23 = -2779083042307757482LL;
unsigned int var_24 = 1746563509U;
unsigned long long int arr_5 [16] [16] [16] ;
long long int arr_10 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8367731998644185165ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2545553433163962721LL;
}

void checksum() {
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

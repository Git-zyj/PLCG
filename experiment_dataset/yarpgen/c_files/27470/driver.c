#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3670356724241950471LL;
unsigned long long int var_2 = 7945302217612902104ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2385172805U;
unsigned long long int var_6 = 1070873958192161241ULL;
unsigned long long int var_7 = 4994673167187907641ULL;
long long int var_9 = 6425361846341939862LL;
unsigned long long int var_10 = 15480606630681074217ULL;
int var_11 = -1958847816;
unsigned int var_12 = 1728041179U;
int zero = 0;
long long int var_13 = -7599957703759477039LL;
unsigned char var_14 = (unsigned char)34;
long long int var_15 = -3334376644072571233LL;
unsigned long long int var_16 = 3653520378596056184ULL;
int var_17 = 242606552;
unsigned int var_18 = 3483049616U;
unsigned short arr_6 [23] [23] [23] [23] ;
unsigned int arr_7 [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)40059;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1397681924U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 11781107301622111450ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35070;
unsigned int var_2 = 2520323495U;
signed char var_3 = (signed char)-39;
unsigned long long int var_4 = 7449823341231038241ULL;
unsigned long long int var_5 = 4792005667876837396ULL;
unsigned long long int var_6 = 8539854303181766870ULL;
unsigned short var_7 = (unsigned short)35044;
unsigned int var_10 = 104287866U;
unsigned short var_11 = (unsigned short)50375;
signed char var_12 = (signed char)23;
unsigned int var_13 = 1800737892U;
long long int var_15 = -8852303305663177664LL;
long long int var_16 = 7268919841790035592LL;
int zero = 0;
int var_17 = 1620448827;
unsigned int var_18 = 1862473547U;
unsigned short var_19 = (unsigned short)20458;
long long int var_20 = -169644976492238706LL;
short arr_0 [10] ;
long long int arr_4 [10] ;
long long int arr_5 [10] [10] [10] ;
short arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)16113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7655485184118094209LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3581032780300939017LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)15768;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

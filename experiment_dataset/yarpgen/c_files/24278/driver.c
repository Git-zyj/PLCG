#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-56;
unsigned long long int var_4 = 15635124869121200074ULL;
signed char var_6 = (signed char)-49;
unsigned long long int var_9 = 2734742280569399196ULL;
int zero = 0;
signed char var_10 = (signed char)95;
long long int var_11 = 1248662864559335332LL;
long long int var_12 = 7978896658300168340LL;
signed char var_13 = (signed char)70;
unsigned long long int var_14 = 15124550588010685190ULL;
long long int var_15 = -1701662673946080469LL;
unsigned long long int arr_1 [10] [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 6752791403476897172ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7626877447351562988LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

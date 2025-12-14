#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8875474857610515165LL;
long long int var_3 = 7297895066490604471LL;
long long int var_8 = 1712719194036187593LL;
unsigned long long int var_9 = 17307188597841502836ULL;
unsigned long long int var_11 = 6414767453227156739ULL;
int zero = 0;
long long int var_12 = 2649998383563611031LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2740944755165758014ULL;
long long int var_15 = -2851786500584968836LL;
_Bool var_16 = (_Bool)0;
unsigned long long int arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3885103091715914564ULL : 9817438376751551085ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)3522 : (unsigned short)42874;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

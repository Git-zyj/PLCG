#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1265656305314001675LL;
long long int var_1 = 8189069957961695096LL;
long long int var_2 = -1372142837567782384LL;
long long int var_4 = -1653767632747707605LL;
long long int var_5 = 2142182509616384705LL;
long long int var_7 = 7538706564885956789LL;
long long int var_8 = -1755848095868870291LL;
long long int var_9 = -2604143173083076640LL;
int zero = 0;
long long int var_10 = -4308695131382039736LL;
long long int var_11 = 6320102315628230670LL;
long long int var_12 = 4823450008313804571LL;
long long int var_13 = 6872409787184384579LL;
long long int var_14 = 8728317665004636705LL;
long long int arr_1 [10] ;
long long int arr_4 [12] ;
long long int arr_2 [10] ;
long long int arr_5 [12] [12] ;
long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1334542435736754067LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -6467909940633111014LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1862861881325601232LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 7895609564093644845LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -7000718306958373265LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

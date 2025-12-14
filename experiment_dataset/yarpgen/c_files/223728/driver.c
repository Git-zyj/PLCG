#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -368769959;
long long int var_3 = 2212868127078114233LL;
int var_5 = 1693215235;
long long int var_11 = -1107005329910920835LL;
long long int var_12 = 5300886147096302466LL;
unsigned int var_13 = 1445544809U;
unsigned long long int var_14 = 8184875638936681961ULL;
int zero = 0;
unsigned int var_15 = 3198930411U;
int var_16 = 2030251229;
long long int var_17 = 4565030981708744337LL;
long long int var_18 = -4154604432208248533LL;
int var_19 = 1322857242;
long long int var_20 = 823855199104866013LL;
unsigned long long int arr_0 [14] [14] ;
long long int arr_1 [14] [14] ;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 5196719839380754992ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -4319891537568606953LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -942766209;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

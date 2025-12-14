#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -671465480252155912LL;
long long int var_4 = -3857750177489594221LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 2758855823087497121LL;
int var_10 = 1623819183;
long long int var_11 = 3616098031563961952LL;
long long int var_15 = 2655830635462156413LL;
int zero = 0;
long long int var_16 = 5300862039276746574LL;
long long int var_17 = -4518650406107709397LL;
long long int var_18 = 6552041643018263925LL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57892;
unsigned long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 16050350314231145528ULL;
}

void checksum() {
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

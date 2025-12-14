#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2461066802667923905ULL;
unsigned short var_4 = (unsigned short)3155;
unsigned int var_11 = 280993024U;
unsigned int var_14 = 2787750796U;
int zero = 0;
long long int var_17 = -7734924581926883577LL;
long long int var_18 = 1361121371811920089LL;
unsigned int var_19 = 2825068961U;
unsigned int var_20 = 1852379504U;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3575254473U;
}

void checksum() {
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

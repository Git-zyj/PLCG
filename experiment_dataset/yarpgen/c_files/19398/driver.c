#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 4594725755916817006ULL;
unsigned long long int var_14 = 8647980332427870421ULL;
int zero = 0;
unsigned long long int var_17 = 12974150792724350851ULL;
unsigned long long int var_18 = 11776575393666895128ULL;
unsigned long long int var_19 = 9833696524948309419ULL;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 12337248502195093578ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 16004847933272770186ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

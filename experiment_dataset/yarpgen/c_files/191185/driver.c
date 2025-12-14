#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2210203433U;
unsigned char var_2 = (unsigned char)194;
long long int var_4 = 3491993106461143614LL;
long long int var_9 = -1371837334832594335LL;
int zero = 0;
unsigned long long int var_11 = 5380175141146066678ULL;
long long int var_12 = 8900905762267601667LL;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 2712457496U;
unsigned long long int var_15 = 5992205553438798030ULL;
_Bool arr_1 [16] [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
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

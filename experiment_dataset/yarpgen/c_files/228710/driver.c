#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)247;
unsigned long long int var_5 = 10392639614706354471ULL;
unsigned long long int var_7 = 5514033707150315473ULL;
unsigned short var_9 = (unsigned short)24328;
long long int var_10 = 8452128358262922143LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2415602482032874541LL;
unsigned int var_13 = 1616573906U;
long long int var_14 = 3315928955244342207LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1651015085U;
long long int var_17 = 6260275657892314483LL;
unsigned int var_18 = 2782349583U;
unsigned int arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 312610646U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

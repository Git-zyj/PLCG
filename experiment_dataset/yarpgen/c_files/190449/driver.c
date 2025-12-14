#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13548380717425181697ULL;
int var_2 = 1224620370;
short var_4 = (short)-21807;
unsigned int var_5 = 2942181466U;
long long int var_8 = -1731060999396141112LL;
int var_9 = 1681616337;
long long int var_12 = -6612757150612858098LL;
int zero = 0;
int var_13 = -1129697711;
long long int var_14 = 3690743542797226048LL;
_Bool var_15 = (_Bool)1;
int var_16 = 1465227152;
int var_17 = -1456419057;
unsigned int arr_1 [16] ;
unsigned int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4257310229U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4008646035U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

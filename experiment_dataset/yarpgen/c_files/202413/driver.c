#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2802917691U;
long long int var_2 = -8708907592175651786LL;
unsigned char var_4 = (unsigned char)135;
unsigned short var_5 = (unsigned short)47340;
long long int var_10 = -7138284300930713350LL;
int zero = 0;
long long int var_14 = -882921382163289209LL;
long long int var_15 = -1554720934894587787LL;
int var_16 = 228935765;
unsigned char var_17 = (unsigned char)225;
unsigned int var_18 = 2662961904U;
long long int arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 634412838280500753LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)41185;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

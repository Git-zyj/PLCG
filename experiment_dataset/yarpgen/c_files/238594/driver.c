#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
unsigned long long int var_3 = 6422557642540778869ULL;
unsigned char var_9 = (unsigned char)168;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
int var_16 = -1517656808;
unsigned short var_17 = (unsigned short)28483;
unsigned short var_18 = (unsigned short)40766;
unsigned int var_19 = 1721209092U;
unsigned long long int var_20 = 1944727015081403977ULL;
unsigned long long int arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 14844917887094758249ULL;
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

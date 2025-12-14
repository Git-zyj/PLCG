#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17841;
short var_8 = (short)20877;
int var_12 = -777009153;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned long long int var_19 = 11160204583066554139ULL;
long long int var_20 = 8048821318734940339LL;
int var_21 = -183536596;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3036056922U;
unsigned int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 2599714265U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

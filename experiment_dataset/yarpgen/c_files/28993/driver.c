#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -861153326;
int var_2 = -637665902;
unsigned short var_3 = (unsigned short)22611;
unsigned long long int var_6 = 14543373939824109783ULL;
int var_7 = -1147398867;
int zero = 0;
int var_11 = 1537765923;
unsigned short var_12 = (unsigned short)61210;
_Bool var_13 = (_Bool)0;
unsigned char arr_0 [15] ;
int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1621747795;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

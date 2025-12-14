#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12744;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)82;
int var_6 = -671026788;
unsigned long long int var_7 = 11905582150382921689ULL;
unsigned short var_8 = (unsigned short)6050;
long long int var_10 = -2749849331686116260LL;
int zero = 0;
signed char var_12 = (signed char)32;
long long int var_13 = 2033276179520439218LL;
int var_14 = -1758706472;
unsigned int var_15 = 1328336111U;
unsigned long long int var_16 = 8958369071700118184ULL;
unsigned char arr_0 [22] ;
unsigned char arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)246;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

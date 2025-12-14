#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
unsigned char var_1 = (unsigned char)171;
unsigned long long int var_6 = 7669330223789418506ULL;
long long int var_8 = -3018480463647639731LL;
unsigned short var_9 = (unsigned short)33649;
unsigned long long int var_14 = 14999692643889410025ULL;
long long int var_16 = 8528178440517581031LL;
unsigned char var_17 = (unsigned char)153;
int zero = 0;
long long int var_18 = -8092724517634166811LL;
signed char var_19 = (signed char)-105;
_Bool var_20 = (_Bool)0;
int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 881923724;
}

void checksum() {
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

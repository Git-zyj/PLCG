#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 783127626U;
long long int var_5 = 3581412956612796384LL;
signed char var_8 = (signed char)40;
int zero = 0;
unsigned long long int var_10 = 12493551873214471232ULL;
unsigned char var_11 = (unsigned char)15;
long long int var_12 = -4024830073895480907LL;
unsigned long long int var_13 = 16565399425990923451ULL;
_Bool arr_1 [17] ;
unsigned short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)28646;
}

void checksum() {
    hash(&seed, var_10);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-123;
unsigned long long int var_6 = 15480839497237598068ULL;
long long int var_8 = 2580197071143882904LL;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)67;
unsigned long long int var_14 = 357526240683925198ULL;
int zero = 0;
long long int var_20 = 3101162668446706517LL;
signed char var_21 = (signed char)-109;
unsigned long long int var_22 = 1262573878314380653ULL;
unsigned long long int var_23 = 7532628193062091076ULL;
unsigned long long int var_24 = 740410366851940064ULL;
signed char arr_1 [13] [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)36118;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

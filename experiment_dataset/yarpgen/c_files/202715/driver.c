#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 735264192006844777ULL;
unsigned char var_8 = (unsigned char)102;
int zero = 0;
unsigned long long int var_17 = 9152572169519683601ULL;
unsigned char var_18 = (unsigned char)79;
unsigned long long int var_19 = 17908348192411818386ULL;
unsigned char var_20 = (unsigned char)240;
unsigned long long int var_21 = 4571388669064244887ULL;
unsigned char var_22 = (unsigned char)22;
unsigned char arr_6 [20] [20] ;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 6829947704066963372ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14303308393473073668ULL;
int var_7 = 1110033983;
_Bool var_10 = (_Bool)1;
int var_15 = -522291688;
int zero = 0;
unsigned short var_20 = (unsigned short)51304;
unsigned char var_21 = (unsigned char)39;
unsigned long long int var_22 = 8155122991170691055ULL;
long long int var_23 = 715518402799886088LL;
unsigned long long int arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 6122488425343911967ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)9031;
}

void checksum() {
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

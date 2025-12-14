#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5350357693299264939ULL;
long long int var_2 = 3007416653344634442LL;
int var_3 = -499397037;
unsigned char var_4 = (unsigned char)188;
long long int var_6 = -20178299202424410LL;
unsigned char var_7 = (unsigned char)81;
unsigned long long int var_8 = 13698654642711481201ULL;
unsigned int var_10 = 3254955698U;
unsigned long long int var_12 = 4417165266569738186ULL;
int zero = 0;
long long int var_17 = 8940663555957377540LL;
long long int var_18 = 6787107686224109413LL;
_Bool arr_1 [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 11112968586543551662ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

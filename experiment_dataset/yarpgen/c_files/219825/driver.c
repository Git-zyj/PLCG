#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
signed char var_1 = (signed char)-112;
long long int var_5 = 6152610821268953088LL;
signed char var_7 = (signed char)8;
signed char var_9 = (signed char)35;
signed char var_10 = (signed char)-67;
unsigned char var_11 = (unsigned char)138;
long long int var_13 = -5233825638395383495LL;
int zero = 0;
signed char var_14 = (signed char)23;
unsigned char var_15 = (unsigned char)191;
signed char var_16 = (signed char)-48;
long long int var_17 = -8654791847872488264LL;
long long int var_18 = -1915681449674238475LL;
long long int var_19 = 9035426445484625180LL;
signed char arr_0 [21] ;
_Bool arr_1 [21] [21] ;
unsigned char arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)231;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

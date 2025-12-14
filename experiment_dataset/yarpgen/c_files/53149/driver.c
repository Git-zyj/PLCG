#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)59677;
unsigned int var_11 = 752059563U;
unsigned char var_14 = (unsigned char)145;
unsigned short var_15 = (unsigned short)42575;
int zero = 0;
long long int var_20 = 6372176053467488663LL;
unsigned char var_21 = (unsigned char)217;
long long int var_22 = -341394481869379751LL;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)202;
}

void checksum() {
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

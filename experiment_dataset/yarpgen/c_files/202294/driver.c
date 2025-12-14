#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8613894768733119542LL;
int var_5 = 720101471;
unsigned char var_11 = (unsigned char)11;
long long int var_15 = 665160046614285250LL;
int zero = 0;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)54;
long long int var_19 = 1829617682287656381LL;
int var_20 = -11914463;
unsigned short var_21 = (unsigned short)9522;
unsigned int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3376107771U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

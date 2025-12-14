#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4429656880003059708LL;
unsigned char var_5 = (unsigned char)165;
unsigned short var_8 = (unsigned short)42244;
unsigned int var_14 = 1297253610U;
int var_16 = 1255668826;
int zero = 0;
unsigned short var_18 = (unsigned short)10050;
int var_19 = 1120409317;
unsigned short var_20 = (unsigned short)37002;
unsigned long long int var_21 = 791139816027760070ULL;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 772871212U;
}

void checksum() {
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

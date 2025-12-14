#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
signed char var_5 = (signed char)-87;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)47047;
unsigned char var_11 = (unsigned char)198;
unsigned long long int var_12 = 15623351818995043454ULL;
long long int var_13 = -3407903559629458388LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)7137;
int zero = 0;
unsigned long long int var_16 = 6113928987170889234ULL;
unsigned char var_17 = (unsigned char)20;
long long int var_18 = -7318244279550998771LL;
unsigned short var_19 = (unsigned short)22542;
unsigned short var_20 = (unsigned short)12063;
signed char var_21 = (signed char)15;
int var_22 = -1589678043;
unsigned long long int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 8341170764924779315ULL;
}

void checksum() {
    hash(&seed, var_16);
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

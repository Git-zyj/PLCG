#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6253165891771827473LL;
unsigned int var_1 = 1452872601U;
short var_2 = (short)14218;
long long int var_4 = -5886712110953227881LL;
signed char var_5 = (signed char)26;
long long int var_6 = 8985252217526169935LL;
unsigned int var_7 = 3127611894U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11145926198725279907ULL;
unsigned int var_11 = 1359498282U;
unsigned short var_12 = (unsigned short)63236;
int zero = 0;
unsigned int var_13 = 3294193493U;
unsigned char var_14 = (unsigned char)44;
unsigned int var_15 = 3142214390U;
unsigned short var_16 = (unsigned short)8210;
long long int var_17 = 6757312117191271470LL;
unsigned char var_18 = (unsigned char)147;
unsigned char arr_2 [20] ;
signed char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

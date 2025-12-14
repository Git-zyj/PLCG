#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1475800297;
long long int var_3 = -2002647247111319131LL;
unsigned short var_4 = (unsigned short)25075;
unsigned long long int var_6 = 12343206032701573582ULL;
unsigned char var_7 = (unsigned char)72;
int var_12 = 1526046101;
unsigned long long int var_15 = 713210393064149099ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)104;
short var_18 = (short)22634;
unsigned long long int var_19 = 6479972326510271462ULL;
unsigned long long int var_20 = 18302592236547120592ULL;
_Bool var_21 = (_Bool)1;
int arr_0 [10] [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -1537144055;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
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

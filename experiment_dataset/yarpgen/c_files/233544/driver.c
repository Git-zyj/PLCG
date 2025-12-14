#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1446682934;
int var_1 = -336200956;
unsigned char var_5 = (unsigned char)245;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1542784199297240440ULL;
int zero = 0;
unsigned long long int var_14 = 2623968232188755136ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)55409;
unsigned char var_17 = (unsigned char)91;
long long int var_18 = 5311053159437616950LL;
int arr_4 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1671884254;
}

void checksum() {
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

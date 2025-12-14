#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16686572500126865184ULL;
unsigned short var_5 = (unsigned short)64244;
int var_6 = 1688918001;
unsigned long long int var_7 = 2255167409326228027ULL;
short var_8 = (short)1283;
int var_9 = 1283588395;
short var_10 = (short)10604;
unsigned long long int var_12 = 9214853465933662634ULL;
int zero = 0;
int var_14 = -567901600;
long long int var_15 = -4338975982947786176LL;
long long int var_16 = -3734854387407702203LL;
unsigned char var_17 = (unsigned char)75;
unsigned int var_18 = 4285894732U;
int arr_0 [22] ;
int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -290874266;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1194420802;
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

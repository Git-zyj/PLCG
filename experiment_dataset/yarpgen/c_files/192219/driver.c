#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_3 = 1732634184;
unsigned long long int var_5 = 1895965438931601971ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)121;
short var_8 = (short)-16994;
unsigned char var_9 = (unsigned char)138;
int zero = 0;
unsigned long long int var_10 = 11273416082141757601ULL;
long long int var_11 = -822544208102082756LL;
signed char var_12 = (signed char)0;
unsigned short var_13 = (unsigned short)44293;
unsigned short var_14 = (unsigned short)7659;
unsigned long long int var_15 = 14314326276816160774ULL;
long long int var_16 = -6475163127999228551LL;
unsigned short arr_0 [22] ;
unsigned short arr_1 [22] ;
int arr_2 [22] [22] ;
unsigned short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)20243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)18533;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1547067940;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)49776;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

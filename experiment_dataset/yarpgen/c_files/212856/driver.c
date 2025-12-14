#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8740788696289658492LL;
short var_3 = (short)15197;
signed char var_8 = (signed char)115;
unsigned char var_9 = (unsigned char)231;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)(-127 - 1);
unsigned short var_15 = (unsigned short)38907;
long long int var_17 = 7916364204092486529LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 3377894612944531870ULL;
short var_21 = (short)-29532;
long long int arr_0 [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 8641600478202944037LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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

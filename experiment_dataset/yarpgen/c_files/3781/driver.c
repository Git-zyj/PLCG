#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2134195493;
unsigned short var_6 = (unsigned short)53626;
short var_8 = (short)26818;
unsigned short var_9 = (unsigned short)10512;
long long int var_10 = 6414619541810927466LL;
unsigned short var_14 = (unsigned short)61741;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5253806789605274043LL;
int var_19 = 1989642792;
unsigned char var_20 = (unsigned char)22;
unsigned short arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)10918;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

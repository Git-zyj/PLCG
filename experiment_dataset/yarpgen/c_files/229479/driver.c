#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53926;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)50915;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-41;
int var_9 = 298248881;
unsigned long long int var_10 = 670222970580005897ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)2039;
_Bool var_13 = (_Bool)1;
int var_14 = -1364099687;
signed char var_15 = (signed char)17;
int zero = 0;
unsigned long long int var_18 = 10912551168113363228ULL;
unsigned long long int var_19 = 13961315058084180863ULL;
signed char var_20 = (signed char)93;
_Bool var_21 = (_Bool)1;
void init() {
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

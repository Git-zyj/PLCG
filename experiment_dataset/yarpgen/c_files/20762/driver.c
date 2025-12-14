#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4363;
signed char var_3 = (signed char)80;
signed char var_6 = (signed char)-3;
unsigned long long int var_9 = 8828372746884443878ULL;
short var_10 = (short)17971;
long long int var_13 = -8254436650403538561LL;
unsigned long long int var_14 = 1112729165892283396ULL;
signed char var_17 = (signed char)100;
signed char var_18 = (signed char)-102;
int zero = 0;
short var_20 = (short)29286;
unsigned long long int var_21 = 8611481035433922740ULL;
unsigned long long int var_22 = 11032101498896163003ULL;
unsigned short var_23 = (unsigned short)57958;
unsigned short var_24 = (unsigned short)45483;
signed char arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-6;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

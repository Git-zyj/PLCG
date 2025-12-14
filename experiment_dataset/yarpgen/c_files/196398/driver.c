#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 675180235U;
unsigned long long int var_1 = 8071819706250619857ULL;
signed char var_2 = (signed char)-43;
signed char var_3 = (signed char)49;
unsigned int var_4 = 1424699794U;
long long int var_6 = 2794535225047632500LL;
signed char var_9 = (signed char)-99;
unsigned long long int var_10 = 4078584234841886248ULL;
unsigned long long int var_11 = 9445450696613268911ULL;
unsigned long long int var_13 = 4765381208763857528ULL;
signed char var_14 = (signed char)-78;
signed char var_15 = (signed char)115;
int zero = 0;
signed char var_16 = (signed char)22;
unsigned short var_17 = (unsigned short)54540;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

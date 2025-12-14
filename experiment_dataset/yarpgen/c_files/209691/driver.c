#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64473;
unsigned short var_2 = (unsigned short)46089;
unsigned short var_5 = (unsigned short)53971;
unsigned short var_7 = (unsigned short)46468;
unsigned int var_8 = 3911689162U;
signed char var_9 = (signed char)-26;
signed char var_12 = (signed char)-51;
long long int var_13 = 1696564298399028754LL;
signed char var_14 = (signed char)-1;
signed char var_15 = (signed char)38;
int var_16 = -372523912;
int zero = 0;
unsigned int var_17 = 1406278551U;
unsigned short var_18 = (unsigned short)24884;
signed char var_19 = (signed char)-106;
int var_20 = 1171730827;
void init() {
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

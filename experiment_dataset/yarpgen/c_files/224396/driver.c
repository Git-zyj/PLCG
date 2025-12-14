#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)77;
signed char var_5 = (signed char)-21;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)22046;
unsigned char var_11 = (unsigned char)187;
unsigned short var_13 = (unsigned short)14190;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)154;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 13144216799389811346ULL;
unsigned int var_22 = 2010861886U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3133451076U;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3570919410U;
unsigned int var_7 = 2789848833U;
signed char var_8 = (signed char)-89;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 505795816U;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 2557327182U;
int zero = 0;
unsigned char var_15 = (unsigned char)177;
unsigned int var_16 = 2464951118U;
unsigned short var_17 = (unsigned short)28673;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17242656689319219962ULL;
unsigned int var_3 = 222699492U;
unsigned int var_4 = 2502767149U;
short var_6 = (short)28263;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_11 = (short)28785;
unsigned short var_12 = (unsigned short)30683;
unsigned long long int var_14 = 774390139980255629ULL;
unsigned short var_16 = (unsigned short)36739;
int zero = 0;
unsigned int var_20 = 3261023940U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)30995;
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

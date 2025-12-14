#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13325;
unsigned int var_1 = 3070752499U;
long long int var_2 = 7856566085584512655LL;
int var_3 = 2104884796;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1065391212U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8352653402649350045ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
unsigned char var_12 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

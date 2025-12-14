#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5245139252133780646LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)6258;
unsigned int var_3 = 2810164143U;
short var_14 = (short)2741;
int zero = 0;
unsigned long long int var_16 = 7636869434552193532ULL;
unsigned long long int var_17 = 8261918269422210441ULL;
unsigned char var_18 = (unsigned char)207;
signed char var_19 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2434382339U;
signed char var_3 = (signed char)108;
unsigned char var_5 = (unsigned char)208;
signed char var_6 = (signed char)-101;
unsigned int var_8 = 1224187900U;
int var_10 = -1073545843;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 220540336U;
unsigned int var_17 = 3416995430U;
int zero = 0;
unsigned short var_18 = (unsigned short)63675;
unsigned int var_19 = 1958772640U;
unsigned int var_20 = 1039365664U;
void init() {
}

void checksum() {
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

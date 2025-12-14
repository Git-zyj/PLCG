#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6879577285101788421LL;
short var_1 = (short)26637;
long long int var_2 = 3118394973179517923LL;
unsigned int var_3 = 265750662U;
unsigned short var_4 = (unsigned short)36763;
unsigned char var_6 = (unsigned char)208;
int var_7 = 1644830939;
unsigned short var_10 = (unsigned short)21350;
long long int var_11 = 2669318374217953280LL;
unsigned long long int var_14 = 6083115132311647605ULL;
int zero = 0;
signed char var_15 = (signed char)91;
signed char var_16 = (signed char)-120;
_Bool var_17 = (_Bool)1;
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

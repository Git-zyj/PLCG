#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-126;
unsigned short var_4 = (unsigned short)53022;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 2175368736U;
int zero = 0;
unsigned char var_13 = (unsigned char)222;
int var_14 = -1667706531;
long long int var_15 = -2712182309407034610LL;
unsigned int var_16 = 262254849U;
short var_17 = (short)29637;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

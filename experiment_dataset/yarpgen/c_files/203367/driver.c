#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
long long int var_3 = 6440728247147621625LL;
unsigned char var_4 = (unsigned char)127;
long long int var_6 = -7019481409856136234LL;
long long int var_14 = -4887547317907545049LL;
unsigned char var_16 = (unsigned char)165;
int zero = 0;
short var_17 = (short)1675;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

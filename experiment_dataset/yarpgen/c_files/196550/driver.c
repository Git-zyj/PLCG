#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
unsigned short var_4 = (unsigned short)46530;
unsigned short var_8 = (unsigned short)9709;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)47;
signed char var_19 = (signed char)44;
unsigned short var_20 = (unsigned short)64677;
signed char var_21 = (signed char)-22;
long long int var_22 = -5774338214871245526LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

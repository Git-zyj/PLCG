#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5722;
unsigned char var_1 = (unsigned char)153;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 15260073494174040296ULL;
_Bool var_9 = (_Bool)0;
long long int var_14 = -4326727256456755283LL;
unsigned int var_15 = 2636116784U;
signed char var_16 = (signed char)-66;
int zero = 0;
long long int var_17 = 2142735886419498716LL;
long long int var_18 = 2661995650653726592LL;
unsigned char var_19 = (unsigned char)46;
void init() {
}

void checksum() {
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

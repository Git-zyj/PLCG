#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)136;
long long int var_7 = -2414530029393987539LL;
unsigned short var_8 = (unsigned short)62192;
signed char var_10 = (signed char)-74;
unsigned int var_11 = 2738322566U;
int zero = 0;
long long int var_13 = 2934726739318878814LL;
long long int var_14 = -3663870852522239434LL;
unsigned long long int var_15 = 12711967954866105157ULL;
unsigned long long int var_16 = 14098703061783688723ULL;
unsigned int var_17 = 828788751U;
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

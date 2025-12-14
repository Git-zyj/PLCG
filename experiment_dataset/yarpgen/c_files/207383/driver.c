#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3385889389814503694LL;
_Bool var_2 = (_Bool)0;
unsigned int var_8 = 4099407317U;
long long int var_11 = -4548987903631640074LL;
short var_12 = (short)8284;
int zero = 0;
unsigned short var_15 = (unsigned short)3711;
short var_16 = (short)-29840;
unsigned int var_17 = 4143518571U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

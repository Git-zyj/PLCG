#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7899;
unsigned long long int var_1 = 8012018572243868250ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)60032;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)189;
signed char var_13 = (signed char)-2;
int zero = 0;
short var_14 = (short)-23700;
signed char var_15 = (signed char)101;
unsigned short var_16 = (unsigned short)34381;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)84;
long long int var_4 = 4504129557825498074LL;
unsigned long long int var_7 = 14928329127931598391ULL;
signed char var_12 = (signed char)-73;
int zero = 0;
long long int var_16 = 991951875665214955LL;
signed char var_17 = (signed char)-102;
short var_18 = (short)-5527;
signed char var_19 = (signed char)56;
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

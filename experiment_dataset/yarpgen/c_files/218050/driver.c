#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25040;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)36491;
int var_6 = 962313539;
signed char var_7 = (signed char)53;
unsigned long long int var_12 = 3996178590622342499ULL;
int var_13 = 1022956376;
int zero = 0;
unsigned long long int var_16 = 13377187461080067972ULL;
signed char var_17 = (signed char)-12;
int var_18 = 185770848;
void init() {
}

void checksum() {
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

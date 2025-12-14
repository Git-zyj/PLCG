#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 334860054;
int var_2 = -1678569815;
unsigned long long int var_3 = 6668062336761765465ULL;
unsigned long long int var_6 = 9006964186762380171ULL;
unsigned short var_12 = (unsigned short)50631;
unsigned long long int var_13 = 15136945427409483278ULL;
short var_15 = (short)-13903;
unsigned char var_17 = (unsigned char)162;
signed char var_18 = (signed char)-16;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1867245674;
unsigned short var_21 = (unsigned short)19058;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

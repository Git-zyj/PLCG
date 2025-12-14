#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15005100868595006279ULL;
signed char var_1 = (signed char)(-127 - 1);
unsigned int var_4 = 2197642708U;
signed char var_6 = (signed char)-69;
_Bool var_8 = (_Bool)0;
int var_13 = 554357999;
int zero = 0;
short var_15 = (short)-9879;
unsigned long long int var_16 = 8261165752754898378ULL;
void init() {
}

void checksum() {
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

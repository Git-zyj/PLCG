#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned int var_1 = 1394936071U;
signed char var_2 = (signed char)77;
unsigned int var_7 = 1976172991U;
signed char var_8 = (signed char)46;
_Bool var_9 = (_Bool)1;
int var_11 = -202580421;
int zero = 0;
unsigned short var_13 = (unsigned short)4098;
unsigned int var_14 = 900763160U;
unsigned int var_15 = 2901568723U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

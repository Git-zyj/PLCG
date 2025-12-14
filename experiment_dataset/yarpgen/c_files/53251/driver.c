#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2690660253U;
unsigned char var_2 = (unsigned char)72;
signed char var_5 = (signed char)-102;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1186016493U;
int zero = 0;
unsigned int var_17 = 2065285447U;
unsigned short var_18 = (unsigned short)56693;
unsigned short var_19 = (unsigned short)26721;
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

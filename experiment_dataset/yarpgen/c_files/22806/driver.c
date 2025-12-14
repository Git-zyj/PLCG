#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17589535866303603643ULL;
int var_4 = 305156902;
int var_7 = -881281216;
unsigned short var_8 = (unsigned short)57632;
unsigned int var_12 = 1514069889U;
int zero = 0;
unsigned int var_15 = 1076241441U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2683664447U;
short var_18 = (short)-15443;
short var_19 = (short)30543;
signed char var_20 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

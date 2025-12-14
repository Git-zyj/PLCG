#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
short var_1 = (short)-13468;
signed char var_2 = (signed char)-21;
unsigned short var_4 = (unsigned short)13459;
unsigned short var_9 = (unsigned short)64128;
unsigned short var_13 = (unsigned short)2768;
unsigned long long int var_15 = 4744245225248979819ULL;
int zero = 0;
unsigned int var_18 = 2684429071U;
long long int var_19 = -6221389205794048874LL;
unsigned long long int var_20 = 10078075306337027946ULL;
void init() {
}

void checksum() {
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

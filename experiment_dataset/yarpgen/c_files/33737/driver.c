#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4082486189U;
unsigned short var_9 = (unsigned short)40072;
long long int var_10 = -2137060528995740118LL;
int var_12 = 2094380309;
unsigned short var_14 = (unsigned short)38556;
int zero = 0;
long long int var_16 = 1870079841702410953LL;
unsigned char var_17 = (unsigned char)114;
int var_18 = -710913437;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15705;
long long int var_4 = 4453278201046404433LL;
short var_8 = (short)-3515;
unsigned int var_13 = 686497443U;
unsigned char var_14 = (unsigned char)157;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 350447487U;
unsigned int var_21 = 779025904U;
signed char var_22 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

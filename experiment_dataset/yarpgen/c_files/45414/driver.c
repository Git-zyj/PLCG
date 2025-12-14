#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)191;
long long int var_1 = 8286127871490152336LL;
short var_3 = (short)15557;
long long int var_5 = 5535820421523603296LL;
signed char var_6 = (signed char)105;
long long int var_7 = -3711104484442783846LL;
unsigned int var_16 = 2976953503U;
int zero = 0;
short var_20 = (short)-255;
unsigned long long int var_21 = 4263737870732757004ULL;
unsigned short var_22 = (unsigned short)11627;
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

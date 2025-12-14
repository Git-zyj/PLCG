#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -478103027;
int var_7 = -1418781402;
short var_11 = (short)-4337;
unsigned char var_12 = (unsigned char)133;
int var_13 = 1464465366;
long long int var_16 = 3743185108568292152LL;
int zero = 0;
unsigned char var_18 = (unsigned char)214;
long long int var_19 = -5729054191722905211LL;
signed char var_20 = (signed char)27;
signed char var_21 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

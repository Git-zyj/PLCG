#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_3 = (unsigned char)94;
int var_6 = 701226487;
long long int var_12 = 6724418042533025273LL;
unsigned char var_13 = (unsigned char)204;
signed char var_15 = (signed char)72;
long long int var_17 = -1219362051430225762LL;
int zero = 0;
signed char var_18 = (signed char)-35;
short var_19 = (short)13916;
unsigned short var_20 = (unsigned short)54757;
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

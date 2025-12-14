#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
long long int var_3 = 5353280213047985879LL;
unsigned char var_4 = (unsigned char)135;
long long int var_6 = -3937704014692927339LL;
unsigned short var_14 = (unsigned short)43059;
int var_15 = 661681241;
unsigned char var_17 = (unsigned char)228;
int zero = 0;
signed char var_20 = (signed char)3;
unsigned short var_21 = (unsigned short)32726;
signed char var_22 = (signed char)108;
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

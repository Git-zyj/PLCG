#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
unsigned char var_2 = (unsigned char)109;
unsigned char var_10 = (unsigned char)245;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)91;
unsigned short var_19 = (unsigned short)50114;
unsigned short var_20 = (unsigned short)58588;
int var_21 = 1858112941;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
long long int var_2 = 3797252313501652282LL;
unsigned char var_7 = (unsigned char)205;
unsigned short var_8 = (unsigned short)29347;
long long int var_10 = 1923555289402591015LL;
long long int var_11 = 5579418713640572634LL;
int zero = 0;
unsigned char var_14 = (unsigned char)222;
unsigned long long int var_15 = 8105028874590893750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

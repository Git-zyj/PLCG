#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
unsigned char var_3 = (unsigned char)110;
unsigned int var_5 = 449724196U;
unsigned long long int var_15 = 10079388843571551359ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)76;
int var_17 = -346722572;
unsigned char var_18 = (unsigned char)0;
unsigned char var_19 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

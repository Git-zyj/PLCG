#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)169;
unsigned short var_11 = (unsigned short)4818;
int zero = 0;
unsigned long long int var_19 = 16930827657956237814ULL;
short var_20 = (short)-15826;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 165780010U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

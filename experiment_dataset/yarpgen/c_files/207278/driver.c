#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_8 = (signed char)-38;
unsigned int var_9 = 1960353972U;
unsigned char var_11 = (unsigned char)247;
unsigned char var_15 = (unsigned char)169;
unsigned int var_16 = 621824317U;
int zero = 0;
unsigned int var_19 = 4146893823U;
unsigned char var_20 = (unsigned char)161;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)46127;
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

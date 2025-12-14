#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4016830306U;
unsigned char var_4 = (unsigned char)218;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-121;
unsigned short var_19 = (unsigned short)864;
unsigned short var_20 = (unsigned short)22663;
unsigned short var_21 = (unsigned short)64872;
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

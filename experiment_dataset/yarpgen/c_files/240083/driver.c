#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = 187398630;
unsigned char var_16 = (unsigned char)180;
unsigned short var_18 = (unsigned short)11478;
int zero = 0;
signed char var_19 = (signed char)-87;
long long int var_20 = -4849493988225777386LL;
void init() {
}

void checksum() {
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

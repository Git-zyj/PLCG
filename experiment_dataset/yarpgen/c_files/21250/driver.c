#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23299;
int var_6 = -1049236120;
signed char var_9 = (signed char)-20;
long long int var_13 = -8814445839810776698LL;
int zero = 0;
unsigned char var_15 = (unsigned char)170;
short var_16 = (short)-18102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

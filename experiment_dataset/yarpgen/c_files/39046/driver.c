#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8668880182124339420LL;
unsigned char var_1 = (unsigned char)46;
signed char var_2 = (signed char)-86;
short var_3 = (short)22792;
signed char var_6 = (signed char)71;
signed char var_9 = (signed char)84;
signed char var_12 = (signed char)-112;
int zero = 0;
short var_13 = (short)14294;
int var_14 = -252183490;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

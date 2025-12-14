#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
short var_5 = (short)27617;
unsigned int var_7 = 2647893912U;
unsigned short var_8 = (unsigned short)13549;
signed char var_9 = (signed char)9;
signed char var_11 = (signed char)-52;
int zero = 0;
short var_12 = (short)6702;
unsigned int var_13 = 2908983756U;
unsigned short var_14 = (unsigned short)33025;
signed char var_15 = (signed char)31;
long long int var_16 = -8076430964994217092LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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

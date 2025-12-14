#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10492;
signed char var_4 = (signed char)125;
short var_5 = (short)25485;
int var_8 = 425746791;
long long int var_13 = 4228211075448406088LL;
int zero = 0;
unsigned int var_14 = 443882098U;
signed char var_15 = (signed char)-68;
unsigned short var_16 = (unsigned short)24227;
void init() {
}

void checksum() {
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

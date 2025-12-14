#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)89;
unsigned int var_3 = 2421541826U;
signed char var_8 = (signed char)-63;
unsigned short var_12 = (unsigned short)26817;
int zero = 0;
unsigned short var_13 = (unsigned short)49157;
int var_14 = -695067414;
signed char var_15 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
signed char var_2 = (signed char)-9;
long long int var_3 = 8548093827919156484LL;
short var_6 = (short)-20794;
int zero = 0;
unsigned int var_10 = 262285504U;
unsigned int var_11 = 3960271146U;
signed char var_12 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2867;
int var_3 = 499987096;
signed char var_5 = (signed char)-40;
short var_10 = (short)5931;
short var_11 = (short)-7219;
short var_13 = (short)-13723;
short var_14 = (short)29300;
signed char var_15 = (signed char)37;
short var_16 = (short)22851;
int var_18 = -1950169203;
int zero = 0;
signed char var_19 = (signed char)59;
int var_20 = -838512769;
int var_21 = -886071999;
short var_22 = (short)13236;
unsigned int var_23 = 3664739762U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

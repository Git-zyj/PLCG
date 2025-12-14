#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57282;
int var_2 = -1343842450;
int var_3 = 1963046821;
unsigned short var_9 = (unsigned short)52730;
signed char var_10 = (signed char)-76;
signed char var_11 = (signed char)81;
int zero = 0;
int var_12 = 1934143826;
unsigned short var_13 = (unsigned short)64638;
int var_14 = -1667205967;
signed char var_15 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

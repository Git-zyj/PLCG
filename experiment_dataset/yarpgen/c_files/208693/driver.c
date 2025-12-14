#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64471;
signed char var_4 = (signed char)-51;
unsigned short var_6 = (unsigned short)45368;
signed char var_9 = (signed char)-121;
signed char var_11 = (signed char)70;
int zero = 0;
signed char var_12 = (signed char)-9;
unsigned short var_13 = (unsigned short)14339;
unsigned short var_14 = (unsigned short)43064;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

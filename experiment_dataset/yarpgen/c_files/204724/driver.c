#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
unsigned int var_2 = 1022527583U;
int var_3 = 1066109196;
short var_5 = (short)25682;
signed char var_8 = (signed char)-46;
unsigned char var_9 = (unsigned char)59;
int var_10 = 114551586;
unsigned char var_12 = (unsigned char)174;
int zero = 0;
unsigned long long int var_13 = 2868142946549181869ULL;
unsigned int var_14 = 2158060011U;
unsigned short var_15 = (unsigned short)41864;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3106252897U;
unsigned short var_5 = (unsigned short)47320;
signed char var_7 = (signed char)-77;
unsigned int var_8 = 560491095U;
signed char var_9 = (signed char)-26;
unsigned int var_11 = 3357723556U;
unsigned int var_12 = 3391326939U;
int zero = 0;
long long int var_13 = -2721913633302706474LL;
signed char var_14 = (signed char)-2;
unsigned short var_15 = (unsigned short)28505;
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

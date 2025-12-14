#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 382613188U;
short var_5 = (short)30093;
signed char var_6 = (signed char)64;
unsigned int var_7 = 3172613693U;
signed char var_8 = (signed char)-95;
unsigned long long int var_9 = 7736955364306777296ULL;
int var_10 = 239718022;
int zero = 0;
signed char var_11 = (signed char)-55;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

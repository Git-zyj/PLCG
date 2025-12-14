#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10026;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-118;
unsigned short var_8 = (unsigned short)34982;
short var_9 = (short)4701;
int var_10 = 39120584;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)3132;
unsigned short var_14 = (unsigned short)27744;
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

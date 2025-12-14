#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -656477831717282712LL;
signed char var_3 = (signed char)-110;
short var_9 = (short)-2132;
int var_15 = 349580570;
short var_18 = (short)25948;
int zero = 0;
short var_20 = (short)-26723;
unsigned short var_21 = (unsigned short)25325;
unsigned char var_22 = (unsigned char)89;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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

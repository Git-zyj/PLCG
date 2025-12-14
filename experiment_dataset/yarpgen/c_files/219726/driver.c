#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)163;
signed char var_2 = (signed char)-99;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)126;
short var_8 = (short)-24929;
short var_9 = (short)-5749;
int var_11 = -1668751606;
signed char var_12 = (signed char)54;
unsigned int var_15 = 2415986777U;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
unsigned int var_21 = 1508249845U;
int var_22 = 364489790;
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

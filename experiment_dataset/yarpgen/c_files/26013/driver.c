#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-60;
unsigned short var_3 = (unsigned short)11503;
unsigned short var_9 = (unsigned short)18236;
_Bool var_15 = (_Bool)1;
unsigned int var_18 = 1408194583U;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)8013;
int var_21 = -1533622348;
unsigned int var_22 = 1378483728U;
unsigned char var_23 = (unsigned char)39;
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

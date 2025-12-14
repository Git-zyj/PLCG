#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1143065426;
signed char var_3 = (signed char)-11;
unsigned short var_5 = (unsigned short)45781;
short var_7 = (short)4516;
int var_9 = 2004218094;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
_Bool var_13 = (_Bool)1;
int var_14 = 312752588;
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

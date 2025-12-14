#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5958;
_Bool var_1 = (_Bool)1;
short var_3 = (short)9083;
unsigned char var_5 = (unsigned char)138;
signed char var_7 = (signed char)-109;
short var_12 = (short)4219;
int zero = 0;
unsigned char var_13 = (unsigned char)178;
long long int var_14 = 6218947637079456797LL;
void init() {
}

void checksum() {
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

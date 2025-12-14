#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1863938185;
long long int var_4 = -3513668516232390869LL;
short var_5 = (short)-5208;
unsigned char var_6 = (unsigned char)240;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)27929;
short var_11 = (short)-23642;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)49339;
unsigned short var_18 = (unsigned short)18353;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

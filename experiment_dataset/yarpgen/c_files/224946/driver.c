#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4705522071997184130LL;
short var_9 = (short)27433;
unsigned char var_13 = (unsigned char)64;
int zero = 0;
unsigned char var_15 = (unsigned char)253;
long long int var_16 = 6181964791441057504LL;
signed char var_17 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

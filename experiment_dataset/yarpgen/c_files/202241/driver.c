#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5436909828584279899LL;
unsigned int var_6 = 1729357067U;
short var_7 = (short)18343;
short var_8 = (short)26487;
long long int var_9 = 1379472559469913872LL;
int zero = 0;
unsigned char var_11 = (unsigned char)44;
short var_12 = (short)5333;
unsigned char var_13 = (unsigned char)120;
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

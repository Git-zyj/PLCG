#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5615;
signed char var_2 = (signed char)36;
long long int var_6 = -3652964825647320188LL;
int zero = 0;
unsigned char var_12 = (unsigned char)34;
long long int var_13 = -3114709362461320039LL;
unsigned int var_14 = 779839429U;
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

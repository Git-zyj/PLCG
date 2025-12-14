#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39015;
signed char var_2 = (signed char)-106;
unsigned char var_7 = (unsigned char)59;
unsigned char var_14 = (unsigned char)244;
signed char var_15 = (signed char)118;
int zero = 0;
unsigned long long int var_16 = 13872012160958649481ULL;
unsigned short var_17 = (unsigned short)12947;
long long int var_18 = -4932116675508899566LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

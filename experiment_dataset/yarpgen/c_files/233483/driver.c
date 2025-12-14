#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6821492490532173808LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8439489479237732044ULL;
int zero = 0;
int var_20 = -1545312868;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

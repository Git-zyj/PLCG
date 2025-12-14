#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7815994872993731794LL;
long long int var_5 = 4583136317324040601LL;
int var_7 = -1632540588;
int zero = 0;
unsigned long long int var_12 = 17431840703324328978ULL;
unsigned char var_13 = (unsigned char)48;
short var_14 = (short)-25551;
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

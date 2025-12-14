#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1234798471567996175LL;
signed char var_8 = (signed char)-34;
unsigned short var_18 = (unsigned short)48302;
long long int var_19 = 6389718551892283078LL;
int zero = 0;
unsigned char var_20 = (unsigned char)104;
long long int var_21 = 5007505446687720277LL;
unsigned char var_22 = (unsigned char)133;
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

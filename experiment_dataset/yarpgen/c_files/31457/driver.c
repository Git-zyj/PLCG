#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2026803120;
unsigned char var_2 = (unsigned char)70;
int var_3 = 302048085;
int var_11 = 1518994268;
int var_12 = -158940124;
unsigned int var_13 = 2888272380U;
long long int var_14 = -7534573871785169095LL;
int zero = 0;
unsigned int var_19 = 1370485873U;
int var_20 = -1890938982;
int var_21 = -1801138897;
unsigned char var_22 = (unsigned char)140;
int var_23 = 423900815;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

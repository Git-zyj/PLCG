#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1373647498;
unsigned int var_6 = 2597850268U;
unsigned char var_7 = (unsigned char)62;
int var_8 = 640168763;
unsigned short var_9 = (unsigned short)21088;
unsigned int var_10 = 3974052368U;
int zero = 0;
int var_11 = 1848046248;
int var_12 = 337261197;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

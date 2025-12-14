#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3891589673060457408LL;
unsigned short var_5 = (unsigned short)20427;
unsigned char var_7 = (unsigned char)40;
unsigned char var_9 = (unsigned char)198;
int zero = 0;
int var_19 = -879394332;
unsigned char var_20 = (unsigned char)82;
unsigned char var_21 = (unsigned char)23;
int var_22 = 895271721;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

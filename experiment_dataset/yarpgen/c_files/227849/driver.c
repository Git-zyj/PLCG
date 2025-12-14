#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)188;
unsigned short var_8 = (unsigned short)53935;
unsigned char var_9 = (unsigned char)58;
unsigned short var_19 = (unsigned short)8927;
int zero = 0;
short var_20 = (short)-19153;
long long int var_21 = 5032088031364828325LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

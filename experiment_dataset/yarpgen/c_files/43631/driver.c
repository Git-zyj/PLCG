#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)208;
unsigned short var_4 = (unsigned short)27242;
int zero = 0;
unsigned char var_13 = (unsigned char)19;
short var_14 = (short)9569;
unsigned long long int var_15 = 681662573842006988ULL;
unsigned short var_16 = (unsigned short)7015;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32500;
short var_6 = (short)-24560;
unsigned short var_9 = (unsigned short)47834;
int zero = 0;
unsigned char var_12 = (unsigned char)149;
short var_13 = (short)-29131;
unsigned short var_14 = (unsigned short)9599;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8516;
int var_1 = -1634382673;
unsigned short var_2 = (unsigned short)9547;
unsigned int var_4 = 459992315U;
unsigned short var_8 = (unsigned short)18542;
int zero = 0;
unsigned short var_10 = (unsigned short)12804;
unsigned short var_11 = (unsigned short)3411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

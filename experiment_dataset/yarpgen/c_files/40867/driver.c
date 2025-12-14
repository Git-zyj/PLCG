#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59353;
unsigned short var_5 = (unsigned short)9614;
unsigned short var_6 = (unsigned short)29964;
int var_8 = -1097928427;
int var_9 = 1986905964;
int var_10 = 1553469774;
int zero = 0;
unsigned short var_14 = (unsigned short)58529;
unsigned short var_15 = (unsigned short)51352;
int var_16 = -1682106056;
unsigned short var_17 = (unsigned short)60375;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

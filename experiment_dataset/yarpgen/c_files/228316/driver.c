#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35351;
unsigned long long int var_3 = 10052508583757546830ULL;
int var_5 = -1381949787;
signed char var_8 = (signed char)35;
int var_9 = 1222579638;
unsigned short var_10 = (unsigned short)53341;
int zero = 0;
unsigned char var_14 = (unsigned char)140;
unsigned short var_15 = (unsigned short)50027;
long long int var_16 = -3177440486726419389LL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 482021943U;
unsigned char var_8 = (unsigned char)70;
long long int var_13 = -2771864132763704116LL;
unsigned short var_14 = (unsigned short)37972;
int zero = 0;
int var_17 = 1481658526;
long long int var_18 = -1474491444164689117LL;
unsigned char var_19 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

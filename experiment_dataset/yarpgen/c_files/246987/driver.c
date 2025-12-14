#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7180720798671671194LL;
unsigned char var_8 = (unsigned char)226;
unsigned short var_9 = (unsigned short)42513;
int zero = 0;
long long int var_13 = 6498160097554490108LL;
long long int var_14 = -8671911039350417091LL;
unsigned long long int var_15 = 16801760441841049315ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

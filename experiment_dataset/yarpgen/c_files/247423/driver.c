#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
long long int var_1 = -6722183409895249947LL;
unsigned long long int var_2 = 8278817711928657910ULL;
short var_5 = (short)-26466;
unsigned long long int var_6 = 11295169802231408779ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)184;
unsigned char var_20 = (unsigned char)130;
long long int var_21 = 6027037857664221882LL;
unsigned char var_22 = (unsigned char)191;
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

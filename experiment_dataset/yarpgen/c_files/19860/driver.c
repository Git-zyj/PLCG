#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38923;
unsigned long long int var_5 = 14721106206113253651ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)134;
unsigned long long int var_18 = 4395786143822789021ULL;
unsigned long long int var_19 = 7360041494708255336ULL;
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

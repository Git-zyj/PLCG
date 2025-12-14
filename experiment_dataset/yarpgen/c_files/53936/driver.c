#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4031702959205558906LL;
int var_7 = 339743194;
unsigned long long int var_8 = 18435502548234795223ULL;
long long int var_9 = 2537624734451534153LL;
short var_11 = (short)220;
int zero = 0;
short var_17 = (short)-5557;
long long int var_18 = -6675877684491620000LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

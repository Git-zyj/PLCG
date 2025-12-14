#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)125;
long long int var_9 = -8309498162610788331LL;
long long int var_11 = -5420286742658556214LL;
int zero = 0;
unsigned char var_19 = (unsigned char)168;
unsigned short var_20 = (unsigned short)64420;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

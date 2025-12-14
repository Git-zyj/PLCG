#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1474385375;
unsigned long long int var_5 = 2529722186844406446ULL;
int var_6 = 162907832;
long long int var_9 = 2037065171692966926LL;
int var_10 = 1336827082;
unsigned short var_14 = (unsigned short)56904;
unsigned char var_16 = (unsigned char)184;
int zero = 0;
unsigned long long int var_20 = 16069098263927003743ULL;
unsigned char var_21 = (unsigned char)33;
unsigned short var_22 = (unsigned short)25170;
signed char var_23 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

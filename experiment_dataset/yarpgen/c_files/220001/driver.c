#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -14147670;
int var_2 = 1151212633;
int var_5 = -929570285;
long long int var_6 = 8379908801170143690LL;
unsigned char var_8 = (unsigned char)150;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
signed char var_13 = (signed char)26;
short var_14 = (short)16210;
int var_15 = -180032286;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

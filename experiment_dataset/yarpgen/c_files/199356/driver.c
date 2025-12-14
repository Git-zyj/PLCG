#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 967795186;
short var_6 = (short)26220;
int var_7 = -1720932465;
unsigned long long int var_9 = 7019769875222017430ULL;
short var_10 = (short)8375;
signed char var_13 = (signed char)18;
short var_15 = (short)-25781;
int zero = 0;
long long int var_17 = 8615951806984660539LL;
long long int var_18 = -1397436476621804167LL;
unsigned int var_19 = 1859762060U;
unsigned long long int var_20 = 14512009685207106608ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

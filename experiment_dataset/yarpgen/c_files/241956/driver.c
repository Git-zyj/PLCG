#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -146869908;
int var_1 = 1295696265;
int var_4 = 13663261;
unsigned long long int var_5 = 7701255348906033152ULL;
unsigned int var_6 = 392581445U;
int var_8 = -1342382186;
int var_10 = -1054562513;
int var_11 = 1883836771;
int zero = 0;
unsigned long long int var_12 = 13809074898725554931ULL;
unsigned long long int var_13 = 678314897070375878ULL;
int var_14 = -1539310563;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

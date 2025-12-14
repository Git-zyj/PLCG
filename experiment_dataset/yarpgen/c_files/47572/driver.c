#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1795714172;
_Bool var_1 = (_Bool)0;
unsigned long long int var_8 = 8934465555049623453ULL;
short var_9 = (short)-29002;
unsigned long long int var_10 = 5368392340442511899ULL;
short var_12 = (short)23586;
int zero = 0;
unsigned long long int var_13 = 12111308078314620370ULL;
int var_14 = 1005916049;
unsigned char var_15 = (unsigned char)58;
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

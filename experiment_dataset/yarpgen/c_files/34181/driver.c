#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
int var_1 = 1433910924;
unsigned short var_4 = (unsigned short)24864;
unsigned short var_8 = (unsigned short)52361;
unsigned char var_9 = (unsigned char)252;
unsigned short var_10 = (unsigned short)20676;
unsigned short var_11 = (unsigned short)24616;
int zero = 0;
unsigned long long int var_13 = 7677687076497602798ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 877388304;
int var_1 = -1654145039;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 9863918162129422419ULL;
long long int var_4 = 4927517373322516506LL;
signed char var_6 = (signed char)27;
int zero = 0;
long long int var_14 = -7633781591904174392LL;
signed char var_15 = (signed char)-71;
signed char var_16 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

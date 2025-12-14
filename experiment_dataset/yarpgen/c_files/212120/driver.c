#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1393884067;
int var_2 = 1559788054;
unsigned char var_3 = (unsigned char)39;
short var_8 = (short)25773;
short var_9 = (short)27981;
short var_13 = (short)13365;
signed char var_15 = (signed char)-31;
long long int var_16 = 6173802119240412016LL;
int zero = 0;
unsigned long long int var_19 = 16141187247208980312ULL;
long long int var_20 = 8057611181502522158LL;
unsigned long long int var_21 = 14634798843984257959ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

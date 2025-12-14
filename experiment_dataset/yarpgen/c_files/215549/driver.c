#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
short var_2 = (short)10090;
int var_3 = -1052566919;
int var_4 = -1295731384;
unsigned char var_5 = (unsigned char)111;
unsigned int var_6 = 3581869330U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 6320216638719449133ULL;
short var_12 = (short)13335;
short var_13 = (short)-18615;
unsigned long long int var_14 = 3218319461041141435ULL;
int zero = 0;
unsigned int var_15 = 1634882321U;
int var_16 = -1434273042;
short var_17 = (short)-29938;
unsigned int var_18 = 1796280978U;
short var_19 = (short)29570;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

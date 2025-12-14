#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)196;
int var_4 = 1346186780;
unsigned short var_6 = (unsigned short)3362;
unsigned long long int var_7 = 14524576697502683200ULL;
signed char var_8 = (signed char)47;
int var_10 = 1059243447;
int var_15 = -427855352;
signed char var_16 = (signed char)64;
unsigned char var_17 = (unsigned char)155;
int zero = 0;
short var_18 = (short)25823;
unsigned short var_19 = (unsigned short)950;
void init() {
}

void checksum() {
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

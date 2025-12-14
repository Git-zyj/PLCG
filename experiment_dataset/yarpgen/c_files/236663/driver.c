#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16879238025738765673ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7211664689520444305ULL;
short var_9 = (short)-29172;
short var_11 = (short)5572;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)20484;
unsigned char var_17 = (unsigned char)55;
unsigned long long int var_18 = 1315488823170162941ULL;
unsigned long long int var_19 = 737732333445089210ULL;
void init() {
}

void checksum() {
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

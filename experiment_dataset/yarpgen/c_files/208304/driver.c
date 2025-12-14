#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8648500183147825685LL;
short var_5 = (short)-3499;
long long int var_9 = 54972310216770812LL;
int zero = 0;
unsigned char var_11 = (unsigned char)205;
int var_12 = -847186765;
unsigned short var_13 = (unsigned short)40332;
int var_14 = -1905674549;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

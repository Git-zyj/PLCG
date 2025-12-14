#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6910908573956170679ULL;
short var_13 = (short)-27499;
int zero = 0;
int var_18 = 156262529;
unsigned short var_19 = (unsigned short)26202;
unsigned long long int var_20 = 7145721554147814524ULL;
int var_21 = 327748488;
int var_22 = 1048144084;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

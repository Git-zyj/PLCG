#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned int var_1 = 2426213460U;
unsigned short var_5 = (unsigned short)64664;
short var_7 = (short)27441;
unsigned int var_8 = 2580640914U;
unsigned short var_9 = (unsigned short)56020;
int zero = 0;
short var_13 = (short)29089;
unsigned int var_14 = 2350703910U;
long long int var_15 = 4406519404841854038LL;
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

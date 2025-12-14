#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 278387365U;
unsigned long long int var_3 = 14745199630906721325ULL;
short var_5 = (short)-12134;
short var_6 = (short)-31883;
int var_9 = -1242946837;
int var_13 = -268317608;
int zero = 0;
long long int var_15 = -6231473563977365497LL;
long long int var_16 = -3889764886699766548LL;
unsigned short var_17 = (unsigned short)55299;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6004030081397279618ULL;
int var_7 = -1475302745;
long long int var_8 = -2651023806309270956LL;
unsigned char var_12 = (unsigned char)139;
int zero = 0;
signed char var_14 = (signed char)-57;
long long int var_15 = 8352044087542530201LL;
unsigned int var_16 = 3460902117U;
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

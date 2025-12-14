#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3530440327U;
unsigned char var_1 = (unsigned char)182;
int var_2 = 540883953;
unsigned int var_3 = 324352337U;
unsigned int var_4 = 2624227548U;
unsigned int var_6 = 57828978U;
long long int var_9 = -267710863297029914LL;
short var_10 = (short)-19266;
unsigned int var_13 = 949481308U;
short var_15 = (short)12765;
int zero = 0;
short var_17 = (short)-7916;
int var_18 = 1801242559;
int var_19 = 1307322516;
short var_20 = (short)7323;
short var_21 = (short)-4161;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

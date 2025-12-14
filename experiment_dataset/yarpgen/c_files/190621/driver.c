#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)9275;
short var_7 = (short)4043;
short var_8 = (short)26698;
short var_10 = (short)-1171;
short var_11 = (short)-12291;
short var_12 = (short)17010;
short var_13 = (short)11572;
short var_14 = (short)-31263;
int zero = 0;
short var_17 = (short)16703;
short var_18 = (short)18533;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

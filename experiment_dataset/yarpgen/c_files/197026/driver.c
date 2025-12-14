#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)60284;
int var_6 = -1392454032;
unsigned short var_8 = (unsigned short)4971;
int var_10 = 108786195;
int var_12 = -688955018;
int zero = 0;
int var_13 = 1074994365;
int var_14 = 1417316791;
void init() {
}

void checksum() {
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

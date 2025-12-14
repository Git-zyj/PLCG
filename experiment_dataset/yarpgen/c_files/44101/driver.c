#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 748016529;
signed char var_7 = (signed char)69;
long long int var_10 = -8607855519815651607LL;
long long int var_12 = 4451938111339024560LL;
short var_13 = (short)22231;
long long int var_14 = -8883726072178471530LL;
unsigned char var_18 = (unsigned char)241;
int zero = 0;
int var_19 = 177963418;
short var_20 = (short)-5144;
unsigned long long int var_21 = 6467546892877373702ULL;
long long int var_22 = -4550887963505987350LL;
int var_23 = 1418344291;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

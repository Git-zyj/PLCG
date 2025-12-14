#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2937287614188949128LL;
_Bool var_11 = (_Bool)0;
int var_12 = 805689445;
int zero = 0;
short var_19 = (short)27927;
short var_20 = (short)-186;
int var_21 = -1049063892;
unsigned char var_22 = (unsigned char)194;
long long int var_23 = -151423425068369282LL;
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

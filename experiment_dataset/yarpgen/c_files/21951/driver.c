#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7065594339043108655LL;
int var_6 = 1469169278;
signed char var_7 = (signed char)-69;
unsigned long long int var_11 = 10011311749655672434ULL;
short var_12 = (short)2297;
signed char var_13 = (signed char)96;
int zero = 0;
int var_15 = 338169967;
short var_16 = (short)-24001;
unsigned short var_17 = (unsigned short)2482;
int var_18 = 1684041476;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

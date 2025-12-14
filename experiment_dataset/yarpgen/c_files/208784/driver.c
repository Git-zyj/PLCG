#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9123993376854524760LL;
long long int var_1 = 6744973651204523269LL;
long long int var_5 = 8289867588609615364LL;
int zero = 0;
long long int var_11 = -2693682973403167057LL;
short var_12 = (short)8780;
unsigned long long int var_13 = 16143691688474643010ULL;
unsigned short var_14 = (unsigned short)22570;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned short var_2 = (unsigned short)17671;
long long int var_3 = 8916463671839603117LL;
unsigned short var_6 = (unsigned short)17395;
short var_7 = (short)544;
long long int var_8 = 1303472574472653756LL;
unsigned int var_9 = 1670253847U;
unsigned int var_11 = 1182923607U;
int zero = 0;
unsigned short var_12 = (unsigned short)3617;
short var_13 = (short)27613;
unsigned char var_14 = (unsigned char)10;
long long int var_15 = 7648510687005432451LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)193;
unsigned int var_3 = 4226090239U;
short var_7 = (short)31340;
signed char var_10 = (signed char)-116;
long long int var_12 = 2991700385625947730LL;
short var_13 = (short)10697;
int zero = 0;
int var_15 = -1423528314;
unsigned char var_16 = (unsigned char)106;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2885808039600169521LL;
signed char var_10 = (signed char)72;
short var_12 = (short)-9671;
unsigned char var_14 = (unsigned char)244;
int zero = 0;
unsigned short var_17 = (unsigned short)29662;
long long int var_18 = -2587091663808637368LL;
int var_19 = -1896731327;
short var_20 = (short)21808;
unsigned int var_21 = 2966562092U;
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

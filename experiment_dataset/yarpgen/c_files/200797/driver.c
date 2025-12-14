#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 455968752182921233ULL;
signed char var_3 = (signed char)-54;
unsigned long long int var_6 = 14516683912781940696ULL;
unsigned int var_12 = 3053730753U;
unsigned int var_13 = 26991244U;
int var_14 = -1233108202;
short var_19 = (short)11214;
int zero = 0;
long long int var_20 = 159816093295473243LL;
unsigned char var_21 = (unsigned char)173;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11678202828324202906ULL;
signed char var_3 = (signed char)32;
signed char var_4 = (signed char)114;
unsigned short var_7 = (unsigned short)34615;
unsigned int var_9 = 3194174858U;
int zero = 0;
short var_10 = (short)-6067;
int var_11 = -708624520;
signed char var_12 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

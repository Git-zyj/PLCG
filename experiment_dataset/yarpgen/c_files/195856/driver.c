#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)104;
signed char var_4 = (signed char)-21;
unsigned long long int var_6 = 9726307500596735346ULL;
signed char var_8 = (signed char)-87;
unsigned long long int var_11 = 18288166501128201562ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
long long int var_15 = -227958859429384434LL;
int var_16 = 1710768997;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8755123243799770883LL;
signed char var_3 = (signed char)-54;
unsigned char var_6 = (unsigned char)66;
unsigned int var_14 = 1072322826U;
int zero = 0;
unsigned int var_17 = 830120354U;
long long int var_18 = 4356286598419313968LL;
void init() {
}

void checksum() {
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

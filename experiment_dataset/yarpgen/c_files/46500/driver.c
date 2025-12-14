#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9000662945438003782LL;
unsigned int var_1 = 3952232690U;
unsigned long long int var_3 = 10387474450467733096ULL;
short var_4 = (short)2467;
int var_6 = -1402958294;
unsigned char var_7 = (unsigned char)255;
unsigned long long int var_8 = 15705268296317085117ULL;
signed char var_9 = (signed char)-101;
int zero = 0;
unsigned long long int var_11 = 13500772500028389967ULL;
int var_12 = 1161836572;
unsigned int var_13 = 599350274U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-17;
unsigned int var_10 = 3604288506U;
long long int var_13 = -9056720307177017526LL;
int zero = 0;
long long int var_14 = 6742874432707542068LL;
short var_15 = (short)-844;
unsigned long long int var_16 = 10940262594518647221ULL;
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

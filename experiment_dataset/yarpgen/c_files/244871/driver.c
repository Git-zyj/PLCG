#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
signed char var_2 = (signed char)-124;
signed char var_3 = (signed char)-52;
long long int var_4 = -6358939325485020185LL;
signed char var_9 = (signed char)-3;
int zero = 0;
long long int var_10 = -1504704925364498776LL;
unsigned long long int var_11 = 10982695643102073111ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

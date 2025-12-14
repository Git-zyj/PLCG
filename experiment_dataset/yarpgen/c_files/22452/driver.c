#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8963914590015935943ULL;
short var_11 = (short)22468;
unsigned long long int var_12 = 7542669076412467430ULL;
short var_13 = (short)11688;
unsigned long long int var_18 = 8553884961212395408ULL;
int zero = 0;
unsigned long long int var_20 = 11676836480443059691ULL;
unsigned long long int var_21 = 7797302204259501819ULL;
short var_22 = (short)-2696;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

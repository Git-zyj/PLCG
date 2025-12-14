#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-11884;
unsigned long long int var_11 = 4477580851199347743ULL;
long long int var_16 = 5261678426119074673LL;
long long int var_19 = -6841778257838163178LL;
int zero = 0;
unsigned long long int var_20 = 2222125008485822376ULL;
long long int var_21 = 490921914964940204LL;
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

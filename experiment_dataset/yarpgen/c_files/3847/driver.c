#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1234627782602280451LL;
long long int var_6 = 7189421910206771855LL;
long long int var_11 = 7180614043716634958LL;
int zero = 0;
unsigned char var_12 = (unsigned char)7;
signed char var_13 = (signed char)-72;
long long int var_14 = 5431680752608360047LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

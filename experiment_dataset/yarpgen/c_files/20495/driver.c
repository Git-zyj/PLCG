#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7884444709954996931LL;
unsigned long long int var_4 = 4660559236074576739ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)57;
long long int var_15 = 7481691916484695740LL;
long long int var_16 = 3809773141534978446LL;
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

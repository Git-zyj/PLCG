#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -508799454200760463LL;
unsigned char var_2 = (unsigned char)14;
unsigned long long int var_6 = 5762976100019276109ULL;
unsigned short var_8 = (unsigned short)29009;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-75;
unsigned char var_11 = (unsigned char)47;
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

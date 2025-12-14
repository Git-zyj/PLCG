#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 33579759445529688LL;
long long int var_3 = 5178622334536629089LL;
unsigned char var_6 = (unsigned char)22;
unsigned char var_10 = (unsigned char)28;
long long int var_11 = 5867010474556338166LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 6642926781442728399ULL;
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

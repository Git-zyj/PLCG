#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 7123056838470583896ULL;
int zero = 0;
unsigned long long int var_10 = 14816657617027127496ULL;
long long int var_11 = -1833456991021379816LL;
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

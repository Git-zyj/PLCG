#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8993344763138927431LL;
_Bool var_8 = (_Bool)1;
int var_9 = -484454382;
int zero = 0;
int var_19 = 1763172839;
long long int var_20 = -5052396186087445206LL;
long long int var_21 = -1905828688529104560LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

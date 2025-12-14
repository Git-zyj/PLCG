#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1662716654189809574ULL;
unsigned long long int var_7 = 10220608908470875354ULL;
long long int var_10 = -4112231980907536756LL;
int zero = 0;
long long int var_12 = 986520602702422305LL;
long long int var_13 = 8897614690820677485LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

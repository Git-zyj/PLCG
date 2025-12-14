#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12203176548224459930ULL;
unsigned long long int var_6 = 11826981981461881523ULL;
signed char var_8 = (signed char)-110;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned long long int var_21 = 13699568769623823371ULL;
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

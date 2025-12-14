#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 728699202U;
unsigned int var_3 = 3810703905U;
unsigned int var_4 = 3188466208U;
unsigned long long int var_9 = 10552677249306581151ULL;
long long int var_11 = 6847686115113427274LL;
unsigned long long int var_15 = 8809458357728811762ULL;
unsigned long long int var_17 = 6211542270437808405ULL;
int zero = 0;
unsigned long long int var_18 = 9473053790583334536ULL;
unsigned long long int var_19 = 14569171496940279725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

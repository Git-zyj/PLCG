#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 7265935374908594124ULL;
unsigned short var_15 = (unsigned short)35754;
int var_16 = -1393195835;
long long int var_19 = -792957843542124379LL;
int zero = 0;
unsigned long long int var_20 = 17039372940865109494ULL;
int var_21 = 2115311790;
signed char var_22 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

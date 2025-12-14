#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1826003899;
unsigned long long int var_7 = 15784824304703388794ULL;
unsigned long long int var_12 = 17858533045967165774ULL;
int var_13 = -1723570411;
long long int var_18 = 6211215610129706107LL;
int zero = 0;
long long int var_19 = 4098867307548399650LL;
signed char var_20 = (signed char)-3;
int var_21 = 1419227004;
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
